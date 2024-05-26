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

// enum Estado { ALQUILADO, DISPONIBLE }; 
// Comentado ya que esto debería estar en la clase Concesionario.
// Prueba
//ESTE!!!


class Garaje {
public:
    vector<Coche*> CochesDisponibles;
    Garaje(vector<Coche*> CochesDisponibles) : CochesDisponibles(CochesDisponibles) {}
};

int main()      // INLCUIR CLEAR LLAMANDO A SYSTEM()
{
    Concesionario concesionario({}, {});
    Administrador admin("12344464D", 628893224, "proyectosprogramacion3@gmail.com", {});
    try {
        concesionario.leerCSV("Coches_2ndaMano.csv", 0);
        concesionario.leerCSV("", 1);
        admin.iniciaSesion(concesionario,"012883D", "jddd");
    }
    catch (exception& e) {
        cout << e.what();
    }
    return 0;
}

/* BORRADOR:

Fecha f(1907);
Cliente c("23333", 12, "string Correo", {});
Administrador ad("string DNI", 789, "string Correo", 3, {});

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

// Excepciones ya metidas en el .hpp
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

class ExceptionInicioSesion : public ExceptionError {
    ExceptionInicioSesion() : ExceptionError("Error en el usuario o contrasena impuestos") {}
};

int main() {
    // INLCUIR CLEAR LLAMANDO A SYSTEM()
    Coche c();
    Administrador admin("12344464D", 628893224, "proyectosprogramacion3@gmail.com", {});

    try {
        vector<Coche*> coches = leerCSV("Coches_2ndaMano.csv");
        Garaje g(coches);

        // Liberar la memoria de los objetos Coche
        for (Coche* coche : coches) {
            delete coche;
        }

    }
    catch (exception& e) {
        cout << e.what();
    }
    return 0;
}

*/

/* REVISAR:
- Try Catch del inicio
- Clase Concesionario
- Inicio de sesión
- Problemas de lectura del CSV
*/

/* CÓDIGO LIMPIO:
1ro el constructor para los métodos públicos

Main.cpp y archivos.hpp: 
1. Los include <> y luego los ".hpp" (solo si los hpp lo necesitan)
2. using namespace std; 

El resto de clases .cpp:
1. Los ".hpp" al cual pertenecen
2. Los include <> (solo si son necesarios)
*/