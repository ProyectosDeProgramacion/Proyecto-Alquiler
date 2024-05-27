// (.hpp) CUSTOMER

// Defines the customer's hpp file.
#pragma once
#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
using namespace std;

class Customer {
private:
    string ID;
    int PhoneNumber;
    string Email;
    string Password;
    vector<Car*> Cart; // Vector cart that adds the cars that the customer rents in case there is more than one.

// The data needed from customers.
public:
    Customer(string ID, int PhoneNumber, string Email, string Password, vector<Car*> Cart);
    string getID();
    string getEmail();
    string getPassword();
    int getPhoneNumber();
    void showCars();
    void generateReport(string filename);
    void dataSave(string filename);
    void showCustomers(string filename);
    void addCart(Car* car);
};

#endif

