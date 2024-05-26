// (.hpp) REPORT

#pragma once
#ifndef REPORT_HPP
#define REPORT_HPP

#include "Car.hpp"
#include "Exceptions.hpp"
#include "Purchase.hpp"
#include "Dealership.hpp"
#include <fstream>

class Report {
public:
	void PurchaseReport(Dealership dealership, string filename);
};

#endif