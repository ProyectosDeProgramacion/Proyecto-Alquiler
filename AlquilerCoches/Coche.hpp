// (.hpp) COCHE


#pragma once

#ifndef COCHE_HPP
#define COCHE_HPP

#include <iostream>
#include <string>
using namespace std;



class Car {
private:
    string Marca;
    string Modelo;
    float Precio;
    string TipoCombustible;
    string AnoFabricacion;
    string Fiabilidad;
    int Kilometros;
    int Estado;
    int id;
    //list<Coche> listaCoches {};
public:
    Car(string Marca, string Modelo, float Precio, string TipoCombustible, string anoFabricacion, int Kilometros, int Estado, int id);
    /*
    Coche(string Marca, string Modelo, float Precio, string TipoCombustible, string anoFabricacion, int Kilometros, int Estado) :
        Marca(Marca), Modelo(Modelo), Precio(Precio), TipoCombustible(TipoCombustible), AnoFabricacion(anoFabricacion),
        Kilometros(Kilometros), Estado(Estado) {}
    */
    string getMarca();
    // string getMatricula();
    string getmodelo();
    float getPrecio();
    string getTipoCombustible();
    string getAnoFabricacion();
    // string getFiabilidad()
    int getKilometros();
    int getEstado();
    int getID();
    // void getListaCoches();

    // Coche(string Marca, string Matricula, string Modelo, float Precio, string TipoCombustible, Fecha anoFabricacion, string Fiabilidad, int Kilometros, int Estado, list<Coche> Coches) : 
    // Marca(Marca), Matricula(Matricula), Modelo(Modelo), Precio(Precio), TipoCombustible(TipoCombustible), anoFabricacion(anoFabricacion), Fiabilidad(Fiabilidad), Kilometros(Kilometros), Estado(Estado) {}

};

#endif


