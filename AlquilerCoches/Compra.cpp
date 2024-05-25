// (.cpp) COMPRA

#include "Compra.hpp"

Compra::Compra(string Coche, string Modelo, int FechaInicio, int FechaFin, string DNICliente) :
    Coche(Coche), Matricula(Matricula), FechaInicio(FechaInicio), FechaFin(FechaFin), DNICliente(DNICliente) {}

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

string Compra::getDNICliente() {
    return this->DNICliente;
}
