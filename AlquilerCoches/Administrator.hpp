// (.hpp) ADMINISTRATOR

#pragma once
#ifndef ADMINISTRATOR_HPP
#define ADMINISTRATOR_HPP

#include <iostream>
#include <string>
#include "Customer.hpp"
#include "Exceptions.hpp"
#include "Dealership.hpp"
using namespace std;

// Definicion de mentira
class Dealership;

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

