// (.hpp) CONCESIONARIO

#pragma once

#ifndef CONCESIONARIO_HPP
#define CONCESIONARIO_HPP


#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Coche.hpp"
#include "Cliente.hpp"
#include "Compra.hpp"
#include "Administrador.hpp"

using namespace std;

// Definicion de mentira
class Administrator;


class Dealership {
private:
    enum Estado { ALQUILADO, DISPONIBLE };
    enum Seleccion { COCHE, CLIENTE };
    vector<Car*> CochesDisponibles;
    vector<Customer*> ClientesRegistrados;
    vector<Purchase*> ComprasRealizadas;
public:
    Dealership(vector<Car*> CochesDisponibles, vector<Customer*>ClientesRegistrados, vector<Purchase*> ComprasRealizadas);
    vector<Car*> getCochesDisponibles();
    vector<Customer*> getClientesRegistrados();
    vector<Purchase*> getPurchases();
    void addPurchase(Purchase* compra);
    void anadirCliente(Customer* cliente);
    Car* buscaCoche(int id);
    string muestraCoche(Car* c);
    bool siCompra(Administrator admin, int id);
    
    int Menu();
    //Funcion cargaDatos: leer el archivo CSV y cargar los coches en una lista dinámica de punteros
    void leerCSV(string filename, int seleccion);
};

#endif


