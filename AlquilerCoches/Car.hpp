// (.hpp) COCHE

// Definition of the hpp of the class.
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

public:
    // The attributes that the administrator wants to from the car in the dataset.
    Car(string Brand, string Model, float Price, string FuelType, string YearProd, int Kms, int Estatus, int ID);
    string getBrand();
    string getModel();
    float getPrice();
    string getFuelType();
    string getYearProd();
    int getKms();
    int getEstatus();
    int getID();
};

#endif


