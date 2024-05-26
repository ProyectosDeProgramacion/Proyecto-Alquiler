// (.cpp) ADMINISTRADOR

#include "Administrador.hpp"
#include "Concesionario.hpp"
#include <fstream>
#include "Exceptions.hpp"

Administrador::Administrador(string DNI, int Telefono, string Correo, vector<Cliente*> listaClientes) :
    DNI(DNI), Telefono(Telefono), Correo(Correo), listaClientes(listaClientes) {}

string Administrador::getDNI() {
    return this->DNI;
}

int Administrador::getTelefono() {
    return this->Telefono;
}

string Administrador::getCorreo() {
    return this->Correo;
}

/*
int Administrador::getnClientes() {
    return this->nClientes;
}
*/

void Administrador::muestraClientes() {
    cout << "Se muestran a continuacion los correos de los clientes: \n";
    for (Cliente* c : listaClientes) {
        cout << c->getCorreo() << endl;
    }
}


Cliente Administrador::buscaCliente(string Correo) {
    for (Cliente* c : listaClientes) {
        if (c->getCorreo() == Correo) return (*c);
    }
    cout << "No se ha encontrado al cliente buscado \n";
}



bool Administrador::iniciaSesion(Concesionario concesionario, string DNI, string Contrasena) {
    for (Cliente* i : concesionario.getClientesRegistrados()) {
        if (i->getDNI() == DNI && i->getContrasena() == Contrasena) return true;
    }
    return false;                           // ¡¡¡CAMBIAR A: --> throw ExceptionInicioSesion(); !!!
}
//Comentario 1
