// (.Cpp) REPORT

#include "Car.hpp"
#include "Exceptions.hpp"
#include "Purchase.hpp"
#include "Dealership.hpp"
#include "Report.hpp"
#include <fstream>
//saves enough data to recognize an old customer again. If you want to reconnect, you can log in since you have your data saved in a Customers.txt file.
void Report::PurchaseReport(Dealership dealership, string filename) {
	ofstream file(filename);
	if (!file.is_open()) throw ExceptionWritingFile();
	for (Purchase* c : dealership.getPurchases()) {
		file << "\nInforme de Compras:\n\n--------------------------------\nA nombre de: " << c->getCustomerID() << "\nLa compra se realizó el: "; 
		cout << c->getDate() << "\nCon un precio de: " << c->getPrice() << "\nDatos del coche:\n" << dealership.showCar(dealership.searchCar(c->getCarID()));
	}
}
