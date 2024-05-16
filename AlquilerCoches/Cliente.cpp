#include "Cliente.hpp"
#include "Coche.hpp"
#include <string>
#include <fstream>

Cliente::Cliente(string DNI, int Telefono, string Correo, vector<Coche*> Carrito) :
    DNI(DNI), Telefono(Telefono), Correo(Correo), Carrito(Carrito) {}

string Cliente::getCorreo() {
    return this->Correo;
}

int Cliente::getTelefono() {
    return this->Telefono;

}

void Cliente::muestraCoches() {
    cout << "A continuacion se muestran los coches que tienes comprados: \n";
    for (Coche* c : Carrito) {
        cout << c->getMarca() << endl;
    }
}

void Cliente::generaInforme(string filename) {
    ofstream archivo(filename);
    for (Coche* c : Carrito) {
        archivo << "Información del coche: \n" << c->getMarca() << c->getmodelo() << c->getPrecio() << c->getTipoCombustible() << c->getAnoFabricacion() << c->getKilometros() << c->getEstado() << endl;
    }
}

void Cliente::guardaDatos(string filename) { // Excepción de escritura
    ofstream archivo(filename);
    cout << "Introduce el DNI: \n";
    cin >> this->DNI;
    cout << "Introduce el correo: \n";
    cin >> this->Correo;
    cout << "Introduce el telefono: \n";
    cin >> this->Telefono;
    if (!archivo.is_open()) {
        // throw ExceptionEscrituraArchivo();
        archivo << endl << "{DNI},{Correo},{Telefono}";
    }
}

void Cliente::muestraClientes(string filename) { // Excepcion de lectura
    ifstream archivo(filename);
    string line;
    if (!archivo.is_open()) {
        cout << "No se puede \n";
    }//throw ExceptionLecturaArchivo();
    while (getline(archivo, line)) {
        cout << line << endl;
    }
}

/*
bool Cliente::iniciarSesion() { // Nueva Excepcion? -> Excepcion Error inicio de sesion de cliente
    //¿Meter Contraseña?
}
*/
