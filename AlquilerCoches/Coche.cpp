#include "Coche.hpp"

// #include <string>

Coche::Coche(string Marca, string Modelo, float Precio, string TipoCombustible, string anoFabricacion, int Kilometros, int Estado) :
    Marca(Marca), Modelo(Modelo), Precio(Precio), TipoCombustible(TipoCombustible), AnoFabricacion(anoFabricacion),
    Kilometros(Kilometros), Estado(Estado) {}

string Coche::getMarca() {
    return this->Marca;
}

/*
string getMatricula() {
    return this->Matricula;
}*/

string Coche::getmodelo() {
    return this->Modelo;
}

float Coche::getPrecio() {
    return this->Precio;
}

string Coche::getTipoCombustible() {
    return this->TipoCombustible;
}

string Coche::getAnoFabricacion() {
    return this->AnoFabricacion;
}

/*
string getFiabilidad() {
    return this->Fiabilidad;
}*/

int Coche::getKilometros() {
    return this->Kilometros;
}

int Coche::getEstado() {
    return this->Estado;
}

/*
void getListaCoches() {
    cout << "Los coches se muestran por marca a continuacion: \n";
    for (Coche c : this->listaCoches) {
        cout << c.Marca << endl;
    }
}
*/

// Coche(string Marca, string Matricula, string Modelo, float Precio, string TipoCombustible, Fecha anoFabricacion, string Fiabilidad, int Kilometros, int Estado, list<Coche> Coches) : 
// Marca(Marca), Matricula(Matricula), Modelo(Modelo), Precio(Precio), TipoCombustible(TipoCombustible), anoFabricacion(anoFabricacion), Fiabilidad(Fiabilidad), Kilometros(Kilometros), Estado(Estado) {}

