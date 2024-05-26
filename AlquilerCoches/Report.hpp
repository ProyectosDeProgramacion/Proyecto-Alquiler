#pragma once

#ifndef REPORT_HPP
#define REPORT_HPP

#include "Coche.hpp"
#include "Exceptions.hpp"
#include "Compra.hpp"
#include <fstream>
#include "Concesionario.hpp"




class Report {
public:
	void PurchaseReport(Dealership dealership, string filename);
};

#endif