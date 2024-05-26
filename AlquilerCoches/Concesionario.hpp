// (.hpp) CONCESIONARIO

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Coche.hpp"
#include "Cliente.hpp"
#include "Compra.hpp"

using namespace std;

#ifndef CONCESIONARIO_HPP
#define CONCESIONARIO_HPP

class Concesionario {
private:
    enum Estado { ALQUILADO, DISPONIBLE };
    enum Seleccion { COCHE, CLIENTE };
    vector<Coche*> CochesDisponibles;
    vector<Cliente*> ClientesRegistrados;
    vector<Compra*> ComprasRealizadas;
public:
    Concesionario(vector<Coche*> CochesDisponibles, vector<Cliente*>ClientesRegistrados, vector<Compra*> ComprasRealizadas);
    vector<Coche*> getCochesDisponibles();
    vector<Cliente*> getClientesRegistrados(); 
    vector<Compra*> getComprasRealizadas();
    void AnadirCompra(Compra *compra);
    void anadirCliente(Cliente* cliente);
    Coche* buscaCoche(int id);
    string muestraCoche(Coche* c);
    //Funcion cargaDatos: leer el archivo CSV y cargar los coches en una lista dinámica de punteros
    void leerCSV(string filename, int seleccion);
}; 

#endif