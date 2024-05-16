// (.cpp) COMPRA

#include "Compra.hpp"

Compra::Compra(string Coche, string Matricula, int FechaInicio, int FechaFin, string DNICliente) :
    Coche(Coche), Matricula(Matricula), FechaInicio(FechaInicio), FechaFin(FechaFin), DNICliente(DNICliente) {}

string Compra::getCoche() {
    return this->Coche;
}

string Compra::getMatricula() {
    return this->Matricula;
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
