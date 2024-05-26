// (.cpp) COMPRA

#include "Compra.hpp"


Purchase::Purchase(string Coche, string Modelo, int FechaInicio, int FechaFin, int idCoche, string DNICliente) :
    Coche(Coche), Precio(Precio), FechaInicio(FechaInicio), FechaFin(FechaFin), DNICliente(DNICliente) {}

string Purchase::getCoche() {
    return this->Coche;
}

string Purchase::getModelo() {
    return this->Modelo;
}

int Purchase::getFechaInicio() {
    return this->FechaInicio;
}

int Purchase::getFechaFin() {
    return this->FechaFin;
}

float Purchase::getPrecio() {
    return this->Precio;
}

int Purchase::getIDCoche() {
    return this->idCoche;
}

string Purchase::getIDCustomer() {
    return this->DNICliente;
}


