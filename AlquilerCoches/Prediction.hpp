// (.hpp) PREDICTION
#pragma once


#ifndef PREDICTION_HPP
#define PREDICTION_HPP

#include <iostream>
#include "Concesionario.hpp"
#include "Coche.hpp"
using namespace std;


class Prediction {
public:
    vector<Car*> filtrarPorMarca(const vector<Car*> coches, const string& marca);
    vector<Car*> filtrarPorModelo(const vector<Car*>& coches, const string& modelo);
    vector<Car*> filtrarPorPrecio(const vector<Car*>& coches, float precio);
    vector<Car*> filtrarPorTipoCombustible(const vector<Car*>& coches, const string& tipoCombustible);
    vector<Car*> filtrarPorAnoFabricacion(const vector<Car*>& coches, int ano);
    vector<Car*> filtrarPorKilometros(const vector<Car*>& coches, int kilometros);
    void showMenu();
    int main();

};
#endif // !PREDICTION_HPP
