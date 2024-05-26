// (.cpp) CUSTOMER

#include "Customer.hpp"
#include "Exceptions.hpp"
#include <fstream>

Customer::Customer(string ID, int PhoneNumber, string Email, string Password, vector<Car*> Cart) :
    ID(ID), PhoneNumber(PhoneNumber), Email(Email), Password(Password), Cart(Cart) {}

string Customer::getID() {
    return this->ID;
}

string Customer::getEmail() {
    return this->Email;
}

string Customer::getPassword() {
    return this->Password;
}

int Customer::getPhoneNumber() {
    return this->PhoneNumber;

}

void Customer::showCars() {
    cout << "The cars you have purchased are shown below: \n";
    for (Car* c : Cart) {
        cout << c->getBrand() << endl;
    }
}

void Customer::generateReport(string filename) {
    ofstream archivo(filename);
    for (Car* c : Cart) {
        archivo << "Car information: \n" << c->getBrand() << c->getModel() << c->getPrice() << c->getFuelType() << c->getYearProd() << c->getKms() << c->getEstatus() << '\n';
    }
}

void Customer::dataSave(string filename) {
    ofstream file(filename, ios::app); // Abre en modo append para agregar datos
    if (!file.is_open()) {
        throw ExceptionWritingFile();
    }
    file << this->ID << "," << this->Email << "," << this->Password << "\n";
    file.close();
}


void Customer::showCustomers(string filename) { // Excepcion de lectura
    ifstream file(filename);
    string line;
    if (!file.is_open()) {
        cout << "Can not be. \n";
        throw ExceptionReadingFile();
    }
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void Customer::addCart(Car* car) {
    Cart.push_back(car);
    cout << "\nThe car has been successfully added to your shopping cart! \n";
}

