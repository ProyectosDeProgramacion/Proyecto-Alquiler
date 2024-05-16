// (.hpp) CLIENTE

#include <iostream>
#include <string>
#include <vector>
#include "Coche.hpp"
using namespace std;

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

class Cliente {
private:
    string DNI;
    int Telefono;
    string Correo;
    string Contrasena;
    vector<Coche*> Carrito;

public:
    Cliente(string DNI, int Telefono, string Correo, string Contrasena, vector<Coche*> Carrito);
    /*
    Cliente(string DNI, int Telefono, string Correo, vector<Coche*> Carrito) :
        DNI(DNI), Telefono(Telefono), Correo(Correo), Carrito(Carrito) {}
    */
    string getDNI();
    string getCorreo();
    string getContrasena();
    int getTelefono();
    void muestraCoches();
    void generaInforme(string filename);
    void guardaDatos(string filename);
    void muestraClientes(string filename);
    // bool iniciarSesion();
};

#endif