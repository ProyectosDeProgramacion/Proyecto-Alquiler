// AlquilerCoches.cpp : Realizado por: Ignacio Bravo y Yago López.
// Hola
// bUENAS T
#include <iostream>
#include <fstream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Compra.hpp"
#include "Coche.hpp"
#include "Cliente.hpp"
#include "Administrador.hpp"
// #include <memory>
using namespace std;

enum Estado { ALQUILADO, DISPONIBLE };

//Excepciones
class ExceptionError : public exception { //Excepcion general
public:
    ExceptionError(const char* message) : exception(message) {}
};

class ExceptionLecturaArchivo : public ExceptionError {
public:
    ExceptionLecturaArchivo() : ExceptionError("Error al leer el archivo") {}
};

class ExceptionEscrituraArchivo : public ExceptionError {
public:
    ExceptionEscrituraArchivo() : ExceptionError("Error al escribir en el archivo") {}
};

class Garaje {
public:
    vector<Coche*> CochesDisponibles;
    Garaje(vector<Coche*> CochesDisponibles) : CochesDisponibles(CochesDisponibles) {}
};

/*
int cuentaLineas() {
    ifstream archivo;
    string valor;
    int lineas = 0;
    archivo.open("C:\\Users\\ibrav\\OneDrive\\Escritorio\\UNI\\2Año\\2ndoCuatri\\Coches_2ndaMano2.csv");

    if (archivo.is_open()) {
        while (archivo >> valor) {
            lineas++;
        }
    }
    return lineas;
}
*/

//Funcion cargaDatos: leer el archivo CSV y cargar los coches en una lista dinámica de punteros
vector<Coche*> leerCSV(string filename) {
    vector<Coche*> coches(100);
    ifstream file(filename);
    if (!file.is_open()) {
        throw ExceptionLecturaArchivo();
    }
    cout << "Abriendo archivo: " << filename << endl;

    string line;
    getline(file, line); // Ignoramos la primera línea del archivo
    int contadorGeneral = 0;

    while (getline(file, line) && contadorGeneral < 100) {
        // cout << "Leyendo línea: " << line << endl; // Imprimir la línea que se está leyendo
        int contador = 0;
        stringstream ss(line);
        string token;
        vector<string> tokens(21);
        int estado = DISPONIBLE;
        // Separar el texto del CSV por comas
        while (getline(ss, token, ',') && contador <= 10) {
            cout << token << endl;
            tokens[contador] = token;
            contador++;
        }
        if (tokens[5] == " ") estado = ALQUILADO; // Alquilado sin precio
        //cout << contador;

        // Crear un nuevo objeto Coche con los datos del CSV
        Coche* coche = new Coche(tokens[2], tokens[4], stof(tokens[5]), tokens[7], tokens[8], stoi(tokens[9]), estado);
        cout << "¡Coche agregado! \n";
        coches.push_back(coche);
        contadorGeneral++;
        cout << "Contador general: \n" << contadorGeneral << endl;
    }
    file.close();
    cout << "Los coches se han agregado correctamente al garaje. \n";
    return coches;
}

/*
Fecha f(1907);
Cliente c("23333", 12, "string Correo", {});
Administrador ad("string DNI", 789, "string Correo", 3, {});
*/

int main() {
    // INLCUIR CLEAR LLAMANDO A SYSTEM()
    Coche c();
    Administrador admin("12344464D", 628893224, "proyectosprogramacion3@gmail.com", {});

    try {
        vector<Coche*> coches = leerCSV("Coches_2ndaMano.csv");
        Garaje g(coches);

        // Liberar la memoria de los objetos Coche
        /*
        for (Coche* coche : coches) {
            delete coche;
        }*/
    }
    catch (exception& e) {
        cout << e.what();
    }
    return 0;
}
