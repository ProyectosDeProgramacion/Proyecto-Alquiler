// (.hpp) PREDICTION

#include <iostream>
#include "Concesionario.hpp"
#include "Coche.hpp"
using namespace std; 

#ifndef PREDICTION_HPP
#define PREDICTION_HPP

class Prediction {
public: 
    vector<Coche*> filtrarPorMarca(const vector<Coche*>& coches, const string& marca);
    vector<Coche*> filtrarPorModelo(const vector<Coche*>& coches, const string& modelo);
    vector<Coche*> filtrarPorPrecio(const vector<Coche*>& coches, float precio);
    vector<Coche*> filtrarPorTipoCombustible(const vector<Coche*>& coches, const string& tipoCombustible);
    vector<Coche*> filtrarPorAnoFabricacion(const vector<Coche*>& coches, int ano); 
    vector<Coche*> filtrarPorKilometros(const vector<Coche*>& coches, int kilometros);
    void mostrarMenu();
    int main();

};
#endif // !PREDICTION_HPP
