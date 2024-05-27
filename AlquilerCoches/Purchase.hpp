// (.hpp) PURCHASE

// The hpp is defined.
#pragma once
#ifndef PURCHASE_HPP
#define PURCHASE_HPP

#include <iostream>
#include <string>
#include "Car.hpp" // It is necessary for you to access the methods of the car class.
using namespace std;

class Purchase {
private:
    string Car;
    string Model;
    int Date;
    float Price;
    int CarID;
    string CustomerID;

// Purchase data.
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

