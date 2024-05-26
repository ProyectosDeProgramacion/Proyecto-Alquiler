// AlquilerCoches.cpp : Realizado por: Ignacio Bravo y Yago López.

// #include <memory>
#include <iostream>
#include <fstream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Exceptions.hpp"
#include "Compra.hpp"
#include "Coche.hpp"
#include "Cliente.hpp"
#include "Administrador.hpp"
#include "Concesionario.hpp"
#include "Prediction.hpp"
#include "Report.hpp"
using namespace std;


//Seguimos el progreso en la rama main del programa

int main()
{
	Dealership concesionario({}, {}, {});
	Administrator admin("12344464D", 628893224, "proyectosprogramacion3@gmail.com", {});
	Prediction prediction;
	Report report;
	try {
		concesionario.leerCSV("Coches_2ndaMano.csv", 0);
		concesionario.leerCSV("Clientes.txt", 1);
		admin.Registered(concesionario);
		bool marcador = true;
		while (marcador) {
			switch (concesionario.Menu()) {
			case 1:
				for (Car* coche : concesionario.getCochesDisponibles()) {
					concesionario.muestraCoche(coche);
				}
				cout << "\n-----FIN DE LISTA ------\n";
				break;

			case 2:

				prediction.main();
				int id;
				cout << "\nIntroduce el ID del coche que quieres comprar:\n--> ";
				cin >> id;

				//concesionario.siCompra(concesionario, admin, id);

				//if (!haComprado) {
					cout << "\n Que otra accion deseas hacer?\n";
				//}
				break;

			case 3:
				report.PurchaseReport(concesionario, "ComprasRealizadas.txt");
				cout << "\nEl informe se ha realizado correctamente!\n";
				break;

			case 5:
				cout << "\nSaliendo...\n";
				marcador = false;


			default:
				cout << "\nEso no es una opcion...\n";
			}



		}





	}
	catch (exception& e) {
		cout << e.what();
	}
	return 0;
}




