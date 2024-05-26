// (.hpp) ADMINISTRADOR

#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Concesionario.hpp"
#include "Exceptions.hpp"
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
    Cliente buscaCliente(string Correo); //REVISAR!!
    void registraCliente(Concesionario concesionario);
    bool siRegistrado(Concesionario concesionario);
    bool iniciaSesion(Concesionario concesionario, string DNI, string Contrasena);
};

#endif

