// (.hpp) ADMINISTRADOR
#pragma once


#ifndef ADMINISTRADOR_HPP
#define ADMINISTRADOR_HPP

#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Exceptions.hpp"
#include "Concesionario.hpp"

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
	Administrator(string ID, int phoneNumber, string Email, vector<Customer*> CustomerList);
	/*
	Administrador(string DNI, int Telefono, string Correo, vector<Cliente*> listaClientes) :
		DNI(DNI), Telefono(Telefono), Correo(Correo), listaClientes(listaClientes) {}
	*/
	string getID();
	int getphoneNumber();
	string getEmail();
	// int getnClientes();
	void showCustomers();
	Customer* searchCustomers(string Email); //REVISAR!!
	void logCustomer(Dealership dealership);
	bool Registered(Dealership dealership);
	bool logIn(Dealership dealership, string ID, string Password);
};

#endif

