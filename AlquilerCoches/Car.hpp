// (.hpp) COCHE

#pragma once
#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string Brand;
    string Model;
    float Price;
    string FuelType;
    string YearProd;
    string Fiabilidad;
    int Kms;
    int Estatus;
    int ID;
    //list<Coche> listaCoches {};
public:
    Car(string Brand, string Model, float Price, string FuelType, string YearProd, int Kms, int Estatus, int ID);
    string getBrand();
    // string getMatricula();
    string getModel();
    float getPrice();
    string getFuelType();
    string getYearProd();
    // string getFiabilidad()
    int getKms();
    int getEstatus();
    int getID();
    // void getListaCoches();

    // Coche(string Marca, string Matricula, string Modelo, float Precio, string TipoCombustible, Fecha anoFabricacion, string Fiabilidad, int Kilometros, int Estado, list<Coche> Coches) : 
    // Marca(Marca), Matricula(Matricula), Modelo(Modelo), Precio(Precio), TipoCombustible(TipoCombustible), anoFabricacion(anoFabricacion), Fiabilidad(Fiabilidad), Kilometros(Kilometros), Estado(Estado) {}

};

#endif


