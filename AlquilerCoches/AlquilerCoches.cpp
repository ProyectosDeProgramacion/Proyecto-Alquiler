// AlquilerCoches.cpp : Realizado por: Ignacio Bravo y Yago López.

// #include <memory>
#include <iostream>
#include <fstream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Exceptions.hpp"
#include "Compra.hpp"
#include "Coche.hpp"
#include "Cliente.hpp"
#include "Administrador.hpp"
#include "Concesionario.hpp"
using namespace std;


//Seguimos el progreso en la rama main del programa

int main()     
{
    Concesionario concesionario({}, {}, {});
    Administrador admin("12344464D", 628893224, "proyectosprogramacion3@gmail.com", {});
    try {
        concesionario.leerCSV("Coches_2ndaMano.csv", 0);
        concesionario.leerCSV("Clientes.txt", 1);
        admin.siRegistrado(concesionario);





    }
    catch (exception& e) {
        cout << e.what();
    }
    return 0;
}

