// (.cpp) PURCHASE

#include "Purchase.hpp"

Purchase::Purchase(string Car, string Model, int Date, int CarID, string CustomerID) :
    Car(Car), Price(Price), Date(Date), CustomerID(CustomerID) {}

string Purchase::getCar() {
    return this->Car;
}

string Purchase::getModel() {
    return this->Model;
}

int Purchase::getDate() {
    return this->Date;
}

float Purchase::getPrice() {
    return this->Price;
}

int Purchase::getCarID() {
    return this->CarID;
}

string Purchase::getCustomerID() {
    return this->CustomerID;
}
