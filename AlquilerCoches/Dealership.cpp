// (.cpp) DEALERSHIP

#include "Dealership.hpp"
#include "Exceptions.hpp"
#include "Administrator.hpp"
#include <iostream>
#include <sstream>

// Contains cars, customers and purchases.
Dealership::Dealership(vector<Car*> AvailableCars, vector<Customer*>RegisteredCostumers, vector<Purchase*> Purchases) :
    AvailableCars(AvailableCars), RegisteredCustomers(RegisteredCostumers), Purchases(Purchases) {}

vector<Car*> Dealership::getAvailableCars() {
    return AvailableCars;
}

vector<Customer*> Dealership::getRegisteredCustomers() {
    return RegisteredCustomers;
}

vector<Purchase*> Dealership::getPurchases() {
    return Purchases;
}

void Dealership::addPurchase(Purchase* purchase) {

    Purchases.push_back(purchase);
    cout << "\nYour purchase has been successfully added!\n";

}

void Dealership::addClient(Customer* customer) {

    RegisteredCustomers.push_back(customer);
    cout << "\nCustomer has been successfully added!\n";

}

Car* Dealership::searchCar(int id) {
    for (Car* c : getAvailableCars()) {
        if (c->getID() == id) return c;
    }
    return nullptr;
}

string Dealership::showCar(Car* c) {
    string CarChain = "";
    CarChain = c->getBrand() + "," + c->getModel() + "," + c->getFuelType() + "," + to_string(c->getKms()) + "," + to_string(c->getPrice()) + "," + c->getYearProd() + "," + to_string(c->getID());
    return CarChain;
}

bool Dealership::ifBuys(Administrator admin, int id) {
    int option;
    cout << "\n Would you like to purchase any of the options?\nIntroduce 1 for YES or 2 for NO: "; 
    cin >> option;
    if (option != 1) return false;
    string email;
    cout << "\nBefore making any purchase, you have to enter your email address: \n---> ";
    cin >> email;

    admin.searchCustomers(email)->addCart(this->searchCar(id));
    return true;
}

int Dealership::Menu() {
    int option;
    cout << "\nChoose an action::\n1. View all available cars.\n2. Filter the available cars according to certain attributes.\n3. Generate a report of the purchased cars.\n4. Exit---> ";
    cin >> option;
    return option;
}

// Read the CSV file and load the cars in a dynamic list of pointers.
void Dealership::readCSV(string filename, int selection) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw ExceptionReadingFile();
    }

    string line;
    // Ignore the first line of the file in order not to read the first line of the CSV since it refers to the Dataset titles.
    getline(file, line); 
    int estatus = AVAILABLE;
    int id = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        vector<string> tokens;

        // Separate CSV text by commas.
        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        if (selection == CAR) {
            if (tokens.size() < 10) continue; // Ensure that there are sufficient tokens.
            if (tokens[5] == "-1") estatus = RENTED;
            Car* coche = new Car(tokens[2], tokens[4], stof(tokens[5]), tokens[7], tokens[8], stoi(tokens[9]), estatus, id);
            AvailableCars.push_back(coche);
            id++;
        }
        else if (selection == CUSTOMER) {
            if (tokens.size() < 4) continue; // Ensure that there are sufficient tokens.
            Customer* customer = new Customer(tokens[0], stoi(tokens[1]), tokens[2], tokens[3], {});
            RegisteredCustomers.push_back(customer);
        }
    }
    file.close();
    cout << "The data file has been loaded successfully.\n";
}
