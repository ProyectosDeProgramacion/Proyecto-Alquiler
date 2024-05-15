#include "Cliente.hpp"
#include <iostream>
#include <string>
using namespace std;

#ifndef ADMINISTRADOR_HPP
#define ADMINISTRADOR_HPP

class Administrador {
private:
    string DNI;
    int Telefono;
    string Correo;
    // int nClientes;
    vector<Cliente*> listaClientes{};
public:
    Administrador(string DNI, int Telefono, string Correo, vector<Cliente*> listaClientes);
    /*
    Administrador(string DNI, int Telefono, string Correo, vector<Cliente*> listaClientes) :
        DNI(DNI), Telefono(Telefono), Correo(Correo), listaClientes(listaClientes) {}
    */
    string getDNI();
    int getTelefono();
    string getCorreo();
    // int getnClientes();
    void muestraClientes();
    Cliente buscaCliente(string Correo);
    void cargaClientes(string filename);
};

#endif

