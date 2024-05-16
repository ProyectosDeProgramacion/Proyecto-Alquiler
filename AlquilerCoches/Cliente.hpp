#include "Coche.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

class Cliente {
private:
    string DNI;
    int Telefono;
    string Correo;
    vector<Coche*> Carrito;

public:
    Cliente(string DNI, int Telefono, string Correo, vector<Coche*> Carrito);
    /*
    Cliente(string DNI, int Telefono, string Correo, vector<Coche*> Carrito) :
        DNI(DNI), Telefono(Telefono), Correo(Correo), Carrito(Carrito) {}
    */
    string getCorreo();
    int getTelefono();
    void muestraCoches();
    void generaInforme(string filename);
    void guardaDatos(string filename);
    void muestraClientes(string filename);
    // bool iniciarSesion();
};

#endif