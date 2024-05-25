#include "Coche.hpp"
#include "Exceptions.hpp"
#include "Compra.hpp"
#include <fstream>
#include "Concesionario.hpp"



void InformeCompras(Concesionario concesionario, string filename) {

	ofstream archivo(filename);
	if (!archivo.is_open()) throw ExceptionEscrituraArchivo();
	for (Compra* c : concesionario.getComprasRealizadas()) {
		archivo << "\nInforme de Compras:\n\n--------------------------------\nA nombre de: " <<
	}
	

	


}


