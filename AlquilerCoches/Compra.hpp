// (.hpp) COMPRA

#pragma once


#ifndef COMPRA_HPP
#define COMPRA_HPP


#include <iostream>
#include <string>
#include "Coche.hpp"
using namespace std;

class Purchase {
private:
    string Coche;
    string Modelo;
    int FechaInicio;
    int FechaFin;
    float Precio;
    int idCoche;
    string DNICliente;

public:
    Purchase(string Coche, string Modelo, int FechaInicio, int FechaFin, int idCoche, string DNICliente);
    /*
    Compra(string Coche, string Matricula, int FechaInicio, int FechaFin, string DNICliente) :
        Coche(Coche), Matricula(Matricula), FechaInicio(FechaInicio), FechaFin(FechaFin), DNICliente(DNICliente) {}
    */
    string getCoche();
    string getModelo();
    int getFechaInicio();
    int getFechaFin();
    float getPrecio();
    int getIDCoche();
    string getIDCustomer();
};

#endif

