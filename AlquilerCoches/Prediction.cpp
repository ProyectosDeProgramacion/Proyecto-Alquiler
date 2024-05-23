#include "Concesionario.hpp"
#include "Coche.hpp"

vector<Coche*> filtrarPorMarca(const vector<Coche*>& coches, const string& marca) {
    vector<Coche*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getMarca() == marca) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Coche*> filtrarPorModelo(const vector<Coche*>& coches, const string& modelo) {
    vector<Coche*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getModelo() == modelo) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Coche*> filtrarPorPrecio(const vector<Coche*>& coches, float precio) {
    vector<Coche*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getPrecio() <= precio) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Coche*> filtrarPorTipoCombustible(const vector<Coche*>& coches, const string& tipoCombustible) {
    vector<Coche*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getTipoCombustible() == tipoCombustible) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Coche*> filtrarPorAnoFabricacion(const vector<Coche*>& coches, int ano) {
    vector<Coche*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getAnoFabricacion() == ano) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Coche*> filtrarPorKilometros(const vector<Coche*>& coches, int kilometros) {
    vector<Coche*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getKilometros() <= kilometros) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}


void mostrarMenu() {
    cout << "\nSeleccione una opción para filtrar los coches:\n";
    cout << "1. Marca\n";
    cout << "2. Modelo\n";
    cout << "3. Precio\n";
    cout << "4. Tipo de Combustible\n";
    cout << "5. Año de Fabricación\n";
    cout << "6. Kilómetros\n";
    cout << "7. Mostrar resultados y salir\n";
    cout << "8. Salir sin mostrar resultados\n";
}

int main() {

    Concesionario concesionario(coches);

    vector<Coche*> cochesFiltrados = concesionario.getCochesDisponibles();
    string opcion;
    vector<string> opcionesSeleccionadas;

    while (true) {
        mostrarMenu();
        cin >> opcion;

        if (opcion == "1") {
            opcionesSeleccionadas.push_back("marca");
        }
        else if (opcion == "2") {
            opcionesSeleccionadas.push_back("modelo");
        }
        else if (opcion == "3") {
            opcionesSeleccionadas.push_back("precio");
        }
        else if (opcion == "4") {
            opcionesSeleccionadas.push_back("tipoCombustible");
        }
        else if (opcion == "5") {
            opcionesSeleccionadas.push_back("anoFabricacion");
        }
        else if (opcion == "6") {
            opcionesSeleccionadas.push_back("kilometros");
        }
        else if (opcion == "7") {
            for (const auto& filtro : opcionesSeleccionadas) {
                if (filtro == "marca") {
                    string marca;
                    cout << "Ingrese la marca: ";
                    cin >> marca;
                    cochesFiltrados = filtrarPorMarca(cochesFiltrados, marca);
                }
                else if (filtro == "modelo") {
                    string modelo;
                    cout << "Ingrese el modelo: ";
                    cin >> modelo;
                    cochesFiltrados = filtrarPorModelo(cochesFiltrados, modelo);
                }
                else if (filtro == "precio") {
                    float precio;
                    cout << "Ingrese el precio máximo: ";
                    cin >> precio;
                    cochesFiltrados = filtrarPorPrecio(cochesFiltrados, precio);
                }
                else if (filtro == "tipoCombustible") {
                    string tipoCombustible;
                    cout << "Ingrese el tipo de combustible: ";
                    cin >> tipoCombustible;
                    cochesFiltrados = filtrarPorTipoCombustible(cochesFiltrados, tipoCombustible);
                }
                else if (filtro == "anoFabricacion") {
                    int ano;
                    cout << "Ingrese el año de fabricación: ";
                    cin >> ano;
                    cochesFiltrados = filtrarPorAnoFabricacion(cochesFiltrados, ano);
                }
                else if (filtro == "kilometros") {
                    int kilometros;
                    cout << "Ingrese el número máximo de kilómetros: ";
                    cin >> kilometros;
                    cochesFiltrados = filtrarPorKilometros(cochesFiltrados, kilometros);
                }
            }

            cout << "\nCoches filtrados:\n";
            for (const auto& coche : cochesFiltrados) {
                cout << "Marca: " << coche->getMarca() << ", Modelo: " << coche->getModelo()
                    << ", Precio: " << coche->getPrecio() << ", Tipo de Combustible: " << coche->getTipoCombustible()
                    << ", Año de Fabricación: " << coche->getAnoFabricacion() << ", Kilómetros: " << coche->getKilometros() << endl;
            }
            break;
        }
        else if (opcion == "8") {
            cout << "Saliendo del programa sin mostrar resultados.\n";
            break;
        }
        else {




