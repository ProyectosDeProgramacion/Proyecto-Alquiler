// (.cpp) ADMINISTRATOR

#include "Administrator.hpp"
#include "Customer.hpp"
#include "Purchase.hpp"
#include "Dealership.hpp"
#include <fstream>

// Class constructor.
Administrator::Administrator(string ID, int PhoneNumber, string Email, vector<Customer*> CustomerList) :
    ID(ID), phoneNumber(PhoneNumber), Email(Email), CustomerList(CustomerList) {}

string Administrator::getID() {
    return this->ID;
}

int Administrator::getphoneNumber() {
    return this->phoneNumber;
}

string Administrator::getEmail() {
    return this->Email;
}

void Administrator::showCustomers() {
    cout << "The customer's emails are shown below: \n";
    for (Customer* c : CustomerList) {
        cout << c->getEmail() << endl;
    }
}

Customer* Administrator::searchCustomers(string Email) {
    for (Customer* c : CustomerList) {
        if (c->getEmail() == Email) return c;
    }
    cout << "Customer not found. \n";
    return nullptr;
}

void Administrator::logCustomer(Dealership dealership) {
    string ID, Email, Password;
    int PhoneNumber;
    cout << "\nIntroduce your ID: ";
    cin >> ID;
    cout << "\nIntroduce your phone number: ";
    cin >> PhoneNumber;
    cout << "<<\nIntroduce your email: ";
    cin >> Email;
    cout << "\nIntroduce your password: ";
    cin >> Password;
    Customer* customer = new Customer(ID, PhoneNumber, Email, Password, {});
    dealership.addClient(customer);
    CustomerList.push_back(customer);
    customer->dataSave("Customers.txt"); // Creates a txt file when the costumers are registrated.
}

// Function identifies whether the user is logged in.
bool Administrator::Registered(Dealership dealership) {
    int option;
    cout << "\nAlready registered?\nIntroduce 1 for YES or 2 for NO: ";
    cin >> option;
    if (option == 1) {
        string DNI, Pass;
        cout << "\nIntroduce your ID: ";
        cin >> DNI;
        cout << "\nIntroduce your password: ";
        cin >> Pass;
        logIn(dealership, DNI, Pass);
    }
    else {
        logCustomer(dealership);
    }
    return true;
}

// Login function.
bool Administrator::logIn(Dealership dealership, string ID, string Password) {
    for (Customer* i : dealership.getRegisteredCustomers()) {
        if (i->getID() == ID && i->getPassword() == Password) return true;
    }
    throw ExceptionLogin();
}


