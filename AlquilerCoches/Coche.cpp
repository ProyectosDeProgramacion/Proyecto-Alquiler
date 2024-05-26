// (.cpp) COCHE

#include "Coche.hpp"
// #include <string>

Car::Car(string Marca, string Modelo, float Precio, string TipoCombustible, string anoFabricacion, int Kilometros, int Estado, int id) :
    Marca(Marca), Modelo(Modelo), Precio(Precio), TipoCombustible(TipoCombustible), AnoFabricacion(anoFabricacion),
    Kilometros(Kilometros), Estado(Estado), id(id) {}

string Car::getMarca() {
    return this->Marca;
}

/*
string getMatricula() {
    return this->Matricula;
}*/
//Comentario2
string Car::getmodelo() {
    return this->Modelo;
}

float Car::getPrecio() {
    return this->Precio;
}

string Car::getTipoCombustible() {
    return this->TipoCombustible;
}

string Car::getAnoFabricacion() {
    return this->AnoFabricacion;
}

/*
string getFiabilidad() {
    return this->Fiabilidad;
}*/

int Car::getKilometros() {
    return this->Kilometros;
}

int Car::getEstado() {
    return this->Estado;
}
int Car::getID() {
    return this->id;
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


