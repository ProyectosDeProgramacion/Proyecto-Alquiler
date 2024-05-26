// (.cpp) CONCESIONARIO

#include "Concesionario.hpp"
#include <sstream>
#include "Exceptions.hpp"
#include "Administrador.hpp"



Dealership::Dealership(vector<Car*> CochesDisponibles, vector<Customer*>ClientesRegistrados, vector<Purchase*> ComprasRealizadas) :
    CochesDisponibles(CochesDisponibles), ClientesRegistrados(ClientesRegistrados), ComprasRealizadas(ComprasRealizadas) {}

vector<Car*> Dealership::getCochesDisponibles() {
    return CochesDisponibles;
}

vector<Customer*> Dealership::getClientesRegistrados() {
    return ClientesRegistrados;
}

vector<Purchase*> Dealership::getPurchases() {
    return ComprasRealizadas;
}

void Dealership::addPurchase(Purchase* compra) {

    ComprasRealizadas.push_back(compra);
    cout << "\nSe ha anadido correctamente la compra!\n";

}

void Dealership::anadirCliente(Customer* cliente) {

    ClientesRegistrados.push_back(cliente);
    cout << "\nsSe ha anadido correctamente al cliente\n";

}


Car* Dealership::buscaCoche(int id) {
    for (Car* c : getCochesDisponibles()) {
        if (c->getID() == id) return c;
    }
    return nullptr;
}

string Dealership::muestraCoche(Car* c) {
    string cadenaCoche = "";
    cadenaCoche = c->getMarca() + "," + c->getmodelo() + "," + c->getTipoCombustible() + "," + to_string(c->getKilometros()) + "," + to_string(c->getPrecio()) + "," + c->getAnoFabricacion() + "," + to_string(c->getID());
    return cadenaCoche;
}

bool Dealership::siCompra(Administrator admin, int id) {
    int opcion;
    cout << "\n Deseas comprar alguna de las opciones?\n(1. SI/ 2. NO): ";
    cin >> opcion;
    if (opcion != 1) return false;
    string correo;
    cout << "\nAntes de realizar ninguna compra, has de meter tu Correo: \n---> ";
    cin >> correo;

    admin.searchCustomers(correo)->anadirCarrito(this->buscaCoche(id));
    return true;
}


int Dealership::Menu() {
    int opcion;
    cout << "\nElija una accion::\n1. Ver todos los coches disponibles\n2. Filtrar los coches disponibles según ciertos atributos\n 3. Generar un informe de los coches comprados\n4. Salir\n---> ";
    cin >> opcion;

    return opcion;
}

//Funcion cargaDatos: leer el archivo CSV y cargar los coches en una lista dinámica de punteros
void Dealership::leerCSV(string filename, int seleccion) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw ExceptionLecturaArchivo();
    }

    string line;
    getline(file, line); // Ignorar la primera línea del archivo
    int estado = DISPONIBLE;
    int id = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        vector<string> tokens;

        // Separar el texto del CSV por comas
        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        if (seleccion == COCHE) {
            if (tokens.size() < 10) continue; // Asegurarse de que hay suficientes tokens
            if (tokens[5] == "-1") estado = ALQUILADO;
            Car* coche = new Car(tokens[2], tokens[4], stof(tokens[5]), tokens[7], tokens[8], stoi(tokens[9]), estado, id);
            CochesDisponibles.push_back(coche);
            id++;
        }
        else if (seleccion == CLIENTE) {
            if (tokens.size() < 4) continue; // Asegurarse de que hay suficientes tokens
            Customer* cliente = new Customer(tokens[0], stoi(tokens[1]), tokens[2], tokens[3], {});
            ClientesRegistrados.push_back(cliente);
        }
    }

    file.close();
    cout << "Los datos se han cargado correctamente.\n";
}
