// (.cpp) ADMINISTRADOR

#include "Administrador.hpp"
#include <fstream>
#include "Cliente.hpp"
#include "Compra.hpp"
#include "Concesionario.hpp"

Administrator::Administrator(string ID, int phoneNumber, string Email, vector<Customer*> CustomerList) :
    ID(ID), phoneNumber(phoneNumber), Email(Email), CustomerList(CustomerList) {}

string Administrator::getID() {
    return this->ID;
}

int Administrator::getphoneNumber() {
    return this->phoneNumber;
}

string Administrator::getEmail() {
    return this->Email;
}

/*
int Administrador::getnClientes() {
    return this->nClientes;
}
*/

void Administrator::showCustomers() {
    cout << "Se muestran a continuacion los correos de los clientes: \n";
    for (Customer* c : CustomerList) {
        cout << c->getCorreo() << endl;
    }
}


Customer* Administrator::searchCustomers(string Email) {
    for (Customer* c : CustomerList) {
        if (c->getCorreo() == Email) return c;
    }
    cout << "No se ha encontrado al cliente buscado \n";
    return nullptr;
}


void Administrator::logCustomer(Dealership concesionario) {
    string ID, Email, Password;
    int phoneNumber;
    cout << "\nIntroduce tu DNI: ";
    cin >> ID;
    cout << "\n Introduce tu Telefono: ";
    cin >> phoneNumber;
    cout << "<<\nIntroduce tu Correo: ";
    cin >> Email;
    cout << "\nIntroduce tu contrasena: ";
    cin >> Password;
    Customer* customer = new Customer(ID, phoneNumber, Email, Password, {});
    concesionario.addClient(customer);
    CustomerList.push_back(customer);
    customer->guardaDatos("Clientes.txt");
}


bool Administrator::Registered(Dealership dealership) {
    int opcion;
    cout << "\nEstas ya registrado?\n(1.SI\n2.NO):";
    cin >> opcion;
    if (opcion == 1) {
        string DNI;
        string Pass;
        cout << "\nIntroduce tu DNI: ";
        cin >> DNI;
        cout << "\nIntroduce tu contrasena: ";
        cin >> Pass;
        logIn(dealership, DNI, Pass);
    }
    else {
        logCustomer(dealership);
    }
    return true;
}

bool Administrator::logIn(Dealership dealership, string ID, string Password) {
    for (Customer* i : dealership.getClientesRegistrados()) {
        if (i->getDNI() == ID && i->getContrasena() == Password) return true;
    }
    throw ExceptionInicioSesion();
}


