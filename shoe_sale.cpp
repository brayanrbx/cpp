// This program does an app to shoe sale

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // variables
    int size = 0, costUnit = 0, priceUnit = 0, priceTotal = 0, costTotal = 0, amountShoes = 0, utilityUnit = 0, utilityTotal = 0;
    float utilityPercent = 0.0f;
    char description[50];
    char reference[10];
    char stock;
    char type;

    // logic
    cout << "Administrar venta de zapatos" << endl;
    cout << "Digite la referencia del zapato" << endl;
    cin.getline(reference, 10);
    cout << "Digite una descripcion del zapato" << endl;
    cin.getline(description, 50);
    cout << "Digite la talla" << endl;
    cin >> size;
    cout << "Digite la letra 's' si esta disponible para la venta o 'n' si no esta disponible" << endl;
    cin >> stock;
    cout << "Digite la cantidad de zapatos que existen de esta referencia" << endl;
    cin >> amountShoes;
    cout << "Digite el costo de la unidad del zapato" << endl;
    cin >> costUnit;
    system("cls"); // used to clear the screen

    if (costUnit <= 30000) {
        type = 'A';
        utilityPercent = 50;
    }
    else if (costUnit > 30000 && costUnit <= 60000) {
        type = 'B';
        utilityPercent = 40;
    }
    else {
        type = 'C';
        utilityPercent = 30;
    }

    costTotal = amountShoes * costUnit;
    utilityUnit = costUnit * (utilityPercent / 100);
    utilityTotal = utilityUnit * amountShoes;
    priceUnit = costUnit + utilityUnit;
    priceTotal = amountShoes * priceUnit;

    cout << "==========================================================" << endl;
    cout << "Los datos registrados son los siguientes" << endl;
    cout << "Referencia: " << reference << endl;
    cout << "Tipo: " << type << endl;
    cout << "Descripcion: " << description << endl;
    cout << "Talla: " << size << endl;
    cout << "Disponibilidad: " << (char) toupper(stock) << endl;
    cout << "Cantidad de zapatos: " << amountShoes << endl;
    cout << "Costo unidad: " << costUnit << endl;
    cout << "Costo total: " << costTotal << endl;
    cout << "Precio unidad: " << priceUnit << endl;
    cout << "Precio total de " << amountShoes << " unidades " << priceTotal << endl;
    cout << "Utilidad por unidad: " << utilityUnit << endl;
    cout << "Utilidad total: " << utilityTotal << endl;
    cout << "Porcentaje de utilidad: " << utilityPercent << endl;
    cout << "==========================================================" << endl;
    cout << "Brayan Rincon" << endl;

    system("pause");
    return EXIT_SUCCESS;
}