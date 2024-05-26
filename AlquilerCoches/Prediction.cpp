// (.cpp) PREDICTION

#include "Dealership.hpp"
#include "Car.hpp"
#include "Prediction.hpp"

vector<Car*> Prediction::FilterByBrand(const vector<Car*> cars, const string& brand) {
    vector<Car*> filtered;
    for (const auto& car : cars) {
        if (car->getBrand() == brand) {
            filtered.push_back(car);
        }
    }
    return filtered;
}

vector<Car*> Prediction::FilterByModel(const vector<Car*>& cars, const string& model) {
    vector<Car*> filtered;
    for (const auto& car : cars) {
        if (car->getModel() == model) {
            filtered.push_back(car);
        }
    }
    return filtered;
}

vector<Car*> Prediction::FilterByPrice(const vector<Car*>& cars, float price) {
    vector<Car*> filtered;
    for (const auto& car : cars) {
        if (car->getPrice() <= price) {
            filtered.push_back(car);
        }
    }
    return filtered;
}

vector<Car*> Prediction::FilterByFuelType(const vector<Car*>& cars, const string& FuelType) {
    vector<Car*> filtered;
    for (const auto& car : cars) {
        if (car->getFuelType() == FuelType) {
            filtered.push_back(car);
        }
    }
    return filtered;
}

vector<Car*> Prediction::FilteredByProdYear(const vector<Car*>& cars, int year) {
    vector<Car*> filtered;
    for (const auto& car : cars) {
        if (stoi(car->getYearProd()) == year) {
            filtered.push_back(car);
        }
    }
    return filtered;
}

vector<Car*> Prediction::FilteredByKms(const vector<Car*>& cars, int kms) {
    vector<Car*> filtered;
    for (const auto& car : cars) {
        if (car->getKms() <= kms) {
            filtered.push_back(car);
        }
    }
    return filtered;
}

void Prediction::showMenu() {
    cout << "Select an option to filter the cars:\n";
    cout << "1. Make";
    cout << "2. Model";
    cout << "3. Price";
    cout << "4. Fuel Type."; 
    cout << "5. Year of Manufacture";
    cout << "6. Kilometers.";
    cout << "7. Show results and exit.";
    cout << "8. Exit without showing results--->";
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
            SelectedOptions.push_back("brand");
            break;
        case 2:
            SelectedOptions.push_back("model");
            break;

        case 3:
            SelectedOptions.push_back("price");
            break;

        case 4:
            SelectedOptions.push_back("fuelType");
            break;
        case 5:
            SelectedOptions.push_back("prodYear");
            break;
        case 6:
            SelectedOptions.push_back("kms");
            break;
        case 7:
            for (const auto& filter : SelectedOptions) {
                if (filter == "brand") {
                    string brand;
                    cout << "Introduce the brand: ";
                    cin >> brand;
                    LeakedCars = FilterByBrand(LeakedCars, brand);
                }
                else if (filter == "model") {
                    string model;
                    cout << "Introduce the model: ";
                    cin >> model;
                    LeakedCars = FilterByModel(LeakedCars, model);
                }
                else if (filter == "price") {
                    float price;
                    cout << "Introduce el max. price: ";
                    cin >> price;
                    LeakedCars = FilterByPrice(LeakedCars, price);
                }
                else if (filter == "fuelType") {
                    string fuelType;
                    cout << "Introduce the tipo de combustible: ";
                    cin >> fuelType;
                    LeakedCars = FilterByFuelType(LeakedCars, fuelType);
                }
                else if (filter == "prodYear") {
                    int year;
                    cout << "Introduce the prod. year: ";
                    cin >> year;
                    LeakedCars = FilteredByProdYear(LeakedCars, year);
                }
                else if (filter == "kms") {
                    int kms;
                    cout << "Introduce the max. number of kms: ";
                    cin >> kms;
                    LeakedCars = FilteredByKms(LeakedCars, kms);
                }

                cout << "\nFiltered Cars:\n";
                for (const auto& car : LeakedCars) {
                    cout << "\nID: " << car->getID() << "; Brand: " << car->getBrand() << ", Model: " << car->getModel()
                        << ", Price: " << car->getPrice() << ", Fuel Type: " << car->getFuelType()
                        << ", Prod. Year: " << car->getYearProd() << ", Kilometers: " << car->getKms() << '\n';
                }
            }
            break;
        case 8:
            cout << "\nQuiting the program without showing results...\n";
            break;
        default:
            cout << "\nInvalid option.\n";
            break;
        }
    }
}
