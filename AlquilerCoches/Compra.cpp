// (.cpp) COMPRA

#include "Compra.hpp"


Compra::Compra(string Coche, string Modelo, int FechaInicio, int FechaFin, int idCoche,string DNICliente) :
    Coche(Coche), Precio(Precio), FechaInicio(FechaInicio), FechaFin(FechaFin), DNICliente(DNICliente) {}

string Compra::getCoche() {
    return this->Coche;
}

string Compra::getModelo() {
    return this->Modelo;
}

int Compra::getFechaInicio() {
    return this->FechaInicio;
}

int Compra::getFechaFin() {
    return this->FechaFin;
}

float Compra::getPrecio() {
    return this->Precio;
}

int Compra::getIDCoche() {
    return this->idCoche;
}

string Compra::getDNICliente() {
    return this->DNICliente;
}
