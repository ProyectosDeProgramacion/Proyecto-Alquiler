// (.hpp) CLIENTE
#pragma once

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Coche.hpp"
using namespace std;



class Customer {
private:
    string DNI;
    int Telefono;
    string Correo;
    string Contrasena;
    vector<Car*> Carrito;

public:
    Customer(string DNI, int Telefono, string Correo, string Contrasena, vector<Car*> Carrito);
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
    void anadirCarrito(Car* coche);
    // bool iniciarSesion();
};

#endif

