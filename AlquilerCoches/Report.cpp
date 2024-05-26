#include "Coche.hpp"
#include "Exceptions.hpp"
#include "Compra.hpp"
#include <fstream>
#include "Concesionario.hpp"
#include "Report.hpp"

void Report::PurchaseReport(Dealership dealership, string filename) {
	ofstream file(filename);
	if (!file.is_open()) throw ExceptionEscrituraArchivo();
	for (Purchase* c : dealership.getPurchases()) {
		file << "\nInforme de Compras:\n\n--------------------------------\nA nombre de: " << c->getIDCustomer() << "\nLa compra se realizó el: " << c->getFechaInicio() << "\nCon un precio de: " << c->getPrecio() << "\nDatos del coche:\n" << dealership.muestraCoche(dealership.buscaCoche(c->getIDCoche()));
	}
}