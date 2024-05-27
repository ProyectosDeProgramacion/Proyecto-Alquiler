// (.hpp) PREDICTION - Module 1: Made by Yago López.

#pragma once
#ifndef PREDICTION_HPP
#define PREDICTION_HPP
// The classes necessary for the operation of this branch are accessed.
#include <iostream>
#include "Dealership.hpp"
#include "Car.hpp"
using namespace std;

class Prediction { // All the filters that the user will enter according to his preferences are displayed.
public:
    vector<Car*> FilterByBrand(const vector<Car*> cars, const string& brand);
    vector<Car*> FilterByModel(const vector<Car*>& cars, const string& model);
    vector<Car*> FilterByPrice(const vector<Car*>& cars, float price);
    vector<Car*> FilterByFuelType(const vector<Car*>& cars, const string& fuelType);
    vector<Car*> FilteredByProdYear(const vector<Car*>& cars, int year);
    vector<Car*> FilteredByKms(const vector<Car*>& cars, int kms);
    void showMenu();
    int main();

};
#endif // !PREDICTION_HPP
