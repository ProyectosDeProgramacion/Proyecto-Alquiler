// (.cpp) CONCESIONARIO

#include "Concesionario.hpp"
#include "Coche.hpp"
#include <sstream>

Concesionario::Concesionario(vector<Coche*> CochesDisponibles, vector<Cliente*>ClientesRegistrados) :
    CochesDisponibles(CochesDisponibles), ClientesRegistrados(ClientesRegistrados) {}

vector<Coche*> Concesionario::getCochesDisponibles() {
    return CochesDisponibles;
}

vector<Cliente*> Concesionario::getClientesDisponibles() {
    return ClientesRegistrados;
}

//Funcion cargaDatos: leer el archivo CSV y cargar los coches en una lista dinámica de punteros
void Concesionario::leerCSV(string filename, int seleccion) {
    ifstream file(filename);
    if (!file.is_open()) {
        // throw ExceptionLecturaArchivo();
    }

    cout << "Abriendo archivo: " << filename << endl;

    string line;
    getline(file, line); // Ignoramos la primera línea del archivo
    int estado = DISPONIBLE;

    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        vector<string> tokens;
        // Separar el texto del CSV por comas
        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        if (seleccion == COCHE) {
            if (tokens[5] == "-1") estado = ALQUILADO;
            Coche* coche = new Coche(tokens[2], tokens[4], stof(tokens[5]), tokens[7], tokens[8], stoi(tokens[9]), estado);
            CochesDisponibles.push_back(coche);
        }
        else if (seleccion == CLIENTE) {
            Cliente* cliente = new Cliente(tokens[0], stoi(tokens[1]), tokens[2], tokens[3], {});
            ClientesRegistrados.push_back(cliente);
        }
    }

    file.close();
    cout << "Los datos se han cargado correctamente.\n";
}
