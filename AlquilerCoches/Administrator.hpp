// (.hpp) ADMINISTRATOR

// Definition the hpp file for the operation of the program.
#pragma once
#ifndef ADMINISTRATOR_HPP
#define ADMINISTRATOR_HPP

// All files that include this class are included.
#include <iostream>
#include <string>
#include "Customer.hpp"
#include "Exceptions.hpp"
#include "Dealership.hpp"
using namespace std;

// Liar definition.
class Dealership;

// Definition of this class.
class Administrator {
private:
	string ID;
	int phoneNumber;
	string Email;
	vector<Customer*> CustomerList{};

public:
	Administrator(string ID, int PhoneNumber, string Email, vector<Customer*> CustomerList);
	string getID();
	int getphoneNumber();
	string getEmail();
	void showCustomers();
	Customer* searchCustomers(string Email);
	void logCustomer(Dealership dealership);
	bool Registered(Dealership dealership);
	bool logIn(Dealership dealership, string ID, string Password);
};

#endif

