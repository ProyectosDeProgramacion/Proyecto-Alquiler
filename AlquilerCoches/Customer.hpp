// (.hpp) CUSTOMER

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
    vector<Car*> Cart;

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

