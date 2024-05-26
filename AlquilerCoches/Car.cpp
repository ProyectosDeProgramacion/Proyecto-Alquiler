// (.cpp) COCHE

#include "Car.hpp"
// #include <string>

Car::Car(string Brand, string Model, float Price, string FuelType, string YearProd, int Kms, int Estatus, int ID) :
    Brand(Brand), Model(Model), Price(Price), FuelType(FuelType), YearProd(YearProd), Kms(Kms), Estatus(Estatus), ID(ID) {}

string Car::getBrand() {
    return this->Brand;
}

//Comentario2
string Car::getModel() {
    return this->Model;
}

float Car::getPrice() {
    return this->Price;
}

string Car::getFuelType() {
    return this->FuelType;
}

string Car::getYearProd() {
    return this->YearProd;
}

int Car::getKms() {
    return this->Kms;
}

int Car::getEstatus() {
    return this->Estatus;
}
int Car::getID() {
    return this->ID;
}

