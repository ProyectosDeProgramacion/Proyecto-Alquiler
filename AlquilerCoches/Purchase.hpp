// (.hpp) PURCHASE

#pragma once
#ifndef PURCHASE_HPP
#define PURCHASE_HPP

#include <iostream>
#include <string>
#include "Car.hpp"
using namespace std;

class Purchase {
private:
    string Car;
    string Model;
    int Date;
    float Price;
    int CarID;
    string CustomerID;

public:
    Purchase(string Car, string Model, int Date, int CarID, string CustomerID);
    string getCar();
    string getModel();
    int getDate();
    float getPrice();
    int getCarID();
    string getCustomerID();
};

#endif

