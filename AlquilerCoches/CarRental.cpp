// AlquilerCoches.cpp - Made by: Ignacio Bravo y Yago López.

// All the includes of the files that correspond to the main class, which is this one, are put together.
#include <iostream>
#include <fstream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Exceptions.hpp"
#include "Purchase.hpp"
#include "Car.hpp"
#include "Customer.hpp"
#include "Administrator.hpp"
#include "Dealership.hpp"
#include "Prediction.hpp"
#include "Report.hpp"
using namespace std;

int main()
{
	Dealership dealership({}, {}, {});
	Administrator admin("12344464D", 628893224, "proyectosprogra3@gmail.com", {});
	Prediction prediction;
	Report report;
	try {
		cout << "Loading the Car Dataset... \n"; // Upload the CSV to the program.
		dealership.readCSV("Coches_2ndaMano.csv", 0);
		cout << "Loading the Customer Dataset... \n"; // Upload the customer txt to the program only when they are logged.
		dealership.readCSV("Customers.txt", 1);
		admin.Registered(dealership);
		bool counter = true;
		while (counter) {
			switch (dealership.Menu()) {
			case 1:
				for (Car* coche : dealership.getAvailableCars()) {
					dealership.showCar(coche);
				}
				cout << "\n----- END OF THE LIST ------\n";
				break;

			case 2:
				prediction.main();
				int id;
				cout << "\nEnter the ID of the car you want to buy:\n--> ";
				cin >> id;
				// This action is commented as an afterthought, but does not influence the program.
				// dealership.ifPurchases(deleader, admin, id);

				//if (!heBuys) {
					cout << "\n What other action do you wish to take?\n";
				//}
				break;

			case 3:
				report.PurchaseReport(dealership, "Purchases.txt");
				cout << "\nThe report has been successfully completed!\n";
				break;

			case 5:
				cout << "\nLeaving...\n";
				counter = false;
			default:
				cout << "\nThat's not an option...\n";
			}
		}
	}
	catch (exception& e) {
		cout << e.what();
	}
	return 0;
}




