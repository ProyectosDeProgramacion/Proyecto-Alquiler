// (.hpp) DEALERSHIP

#pragma once
#ifndef DEALERSHIP_HPP
#define DEALERSHIP_HPP


#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Car.hpp"
#include "Customer.hpp"
#include "Purchase.hpp"
#include "Administrator.hpp"
using namespace std;

// Definicion de mentira (declaracion adelantada)
class Administrator;

class Dealership {
private:
    enum Estado { RENTED, AVAILABLE };
    enum Seleccion { CAR, CUSTOMER };
    vector<Car*> AvailableCars;
    vector<Customer*> RegisteredCustomers;
    vector<Purchase*> Purchases;

public:
    Dealership(vector<Car*> CochesDisponibles, vector<Customer*>ClientesRegistrados, vector<Purchase*> ComprasRealizadas);
    vector<Car*> getAvailableCars();
    vector<Customer*> getRegisteredCustomers();
    vector<Purchase*> getPurchases();
    void addPurchase(Purchase* purchase);
    void addClient(Customer* customer);
    Car* searchCar(int id);
    string showCar(Car* c);
    bool ifBuys(Administrator admin, int id);
    int Menu();
    //Funcion cargaDatos: leer el archivo CSV y cargar los coches en una lista dinámica de punteros
    void readCSV(string filename, int selection);
};

#endif


