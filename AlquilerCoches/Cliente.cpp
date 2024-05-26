// (.cpp) CLIENTE

#include "Cliente.hpp"
#include <fstream>
#include "Exceptions.hpp"

Customer::Customer(string DNI, int Telefono, string Correo, string Contrasena, vector<Car*> Carrito) :
    DNI(DNI), Telefono(Telefono), Correo(Correo), Contrasena(Contrasena), Carrito(Carrito) {}

string Customer::getDNI() {
    return this->DNI;
}

string Customer::getCorreo() {
    return this->Correo;
}

string Customer::getContrasena() {
    return this->Contrasena;
}

int Customer::getTelefono() {
    return this->Telefono;

}

void Customer::muestraCoches() {
    cout << "A continuacion se muestran los coches que tienes comprados: \n";
    for (Car* c : Carrito) {
        cout << c->getMarca() << endl;
    }
}

void Customer::generaInforme(string filename) {
    ofstream archivo(filename);
    for (Car* c : Carrito) {
        archivo << "Información del coche: \n" << c->getMarca() << c->getmodelo() << c->getPrecio() << c->getTipoCombustible() << c->getAnoFabricacion() << c->getKilometros() << c->getEstado() << endl;
    }
}

void Customer::guardaDatos(string filename) {
    ofstream archivo(filename, ios::app); // Abre en modo append para agregar datos
    if (!archivo.is_open()) {
        throw ExceptionEscrituraArchivo();
    }
    archivo << this->DNI << "," << this->Correo << "," << this->Contrasena << "\n";
    archivo.close();
}


void Customer::muestraClientes(string filename) { // Excepcion de lectura
    ifstream archivo(filename);
    string line;
    if (!archivo.is_open()) {
        cout << "No se puede \n";
    }// throw ExceptionLecturaArchivo();
    while (getline(archivo, line)) {
        cout << line << endl;
    }
    archivo.close();
}

void Customer::anadirCarrito(Car* coche) {
    Carrito.push_back(coche);
    cout << "\nEl coche se ha agregado correctamente al carrito de tu compra!\n";
}

