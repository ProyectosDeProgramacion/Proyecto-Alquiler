// (.cpp) PREDICTION

#include "Concesionario.hpp"
#include "Coche.hpp"
#include "Prediction.hpp"

vector<Car*> Prediction::filtrarPorMarca(const vector<Car*> coches, const string& marca) {
    vector<Car*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getMarca() == marca) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Car*> Prediction::filtrarPorModelo(const vector<Car*>& coches, const string& modelo) {
    vector<Car*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getmodelo() == modelo) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Car*> Prediction::filtrarPorPrecio(const vector<Car*>& coches, float precio) {
    vector<Car*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getPrecio() <= precio) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Car*> Prediction::filtrarPorTipoCombustible(const vector<Car*>& coches, const string& tipoCombustible) {
    vector<Car*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getTipoCombustible() == tipoCombustible) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Car*> Prediction::filtrarPorAnoFabricacion(const vector<Car*>& coches, int ano) {
    vector<Car*> filtrados;
    for (const auto& coche : coches) {
        if (stoi(coche->getAnoFabricacion()) == ano) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}

vector<Car*> Prediction::filtrarPorKilometros(const vector<Car*>& coches, int kilometros) {
    vector<Car*> filtrados;
    for (const auto& coche : coches) {
        if (coche->getKilometros() <= kilometros) {
            filtrados.push_back(coche);
        }
    }
    return filtrados;
}


void Prediction::showMenu() {
    cout << "\nSeleccione una opción para filtrar los coches:\n";
    cout << "1. Marca\n";
    cout << "2. Modelo\n";
    cout << "3. Precio\n";
    cout << "4. Tipo de Combustible\n";
    cout << "5. Año de Fabricación\n";
    cout << "6. Kilómetros\n";
    cout << "7. Mostrar resultados y salir\n";
    cout << "8. Salir sin mostrar resultados\n---> ";
}

int Prediction::main() {

    //Concesionario concesionario(coches);

    vector<Car*> LeakedCars;
    int options;
    vector<string> SelectedOptions;

    while (true) {
        showMenu();
        cin >> options;
        switch (options) {
        case 1:
            SelectedOptions.push_back("marca");
            break;
        case 2:
            SelectedOptions.push_back("modelo");
            break;

        case 3:
            SelectedOptions.push_back("precio");
            break;

        case 4:
            SelectedOptions.push_back("tipoCombustible");
            break;
        case 5:
            SelectedOptions.push_back("anoFabricacion");
            break;
        case 6:
            SelectedOptions.push_back("kilometros");
            break;
        case 7:
            for (const auto& filter : SelectedOptions) {
                if (filter == "marca") {
                    string brand;
                    cout << "Ingrese la marca: ";
                    cin >> brand;
                    LeakedCars = filtrarPorMarca(LeakedCars, brand);
                }
                else if (filter == "modelo") {
                    string modelo;
                    cout << "Ingrese el modelo: ";
                    cin >> modelo;
                    LeakedCars = filtrarPorModelo(LeakedCars, modelo);
                }
                else if (filter == "precio") {
                    float price;
                    cout << "Ingrese el precio máximo: ";
                    cin >> price;
                    LeakedCars = filtrarPorPrecio(LeakedCars, price);
                }
                else if (filter == "tipoCombustible") {
                    string fuelType;
                    cout << "Ingrese el tipo de combustible: ";
                    cin >> fuelType;
                    LeakedCars = filtrarPorTipoCombustible(LeakedCars, fuelType);
                }
                else if (filter == "anoFabricacion") {
                    int year;
                    cout << "Ingrese el año de fabricación: ";
                    cin >> year;
                    LeakedCars = filtrarPorAnoFabricacion(LeakedCars, year);
                }
                else if (filter == "kilometros") {
                    int kilometros;
                    cout << "Ingrese el número máximo de kilómetros: ";
                    cin >> kilometros;
                    LeakedCars = filtrarPorKilometros(LeakedCars, kilometros);
                }

                cout << "\nCoches filtrados:\n";
                for (const auto& car : LeakedCars) {
                    cout << "\nID: " << car->getID() << "; Marca: " << car->getMarca() << ", Modelo: " << car->getmodelo()
                        << ", Precio: " << car->getPrecio() << ", Tipo de Combustible: " << car->getTipoCombustible()
                        << ", Año de Fabricación: " << car->getAnoFabricacion() << ", Kilómetros: " << car->getKilometros() << endl;
                }
            }

            break;
        case 8:

            cout << "\nSaliendo del programa sin mostrar resultados...\n";
            break;
        default:
            cout << "\nOpcion invalida\n";
            break;
        }
    }
}
