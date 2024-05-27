// (.hpp) REPORT - Module 2: Made by Ignacio Bravo.

#pragma once
#ifndef REPORT_HPP
#define REPORT_HPP
// It includes the necessary attributes and methods of the following classes.
#include "Car.hpp"
#include "Exceptions.hpp"
#include "Purchase.hpp"
#include "Dealership.hpp"
#include <fstream>

class Report { // Report method that creates the receipt.
public:
	void PurchaseReport(Dealership dealership, string filename);
};

#endif