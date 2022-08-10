// This program does an app to shoe sale

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // variables
    int reference = 0, size = 0, costUnit = 0, priceUnit = 0, priceTotal = 0, costTotal = 0, amountShoes = 0, utilityUnit = 0, utilityTotal = 0;
    float utilityPercent = 0.0f;
    char description[50];
    char stock;

    // logic
    cout << "Administrar venta de zapatos" << endl;
    cout << "Digite la referencia del zapato" << endl;
    cin >> reference;
    cin.ignore(256, '\n'); // used to ignore the newline character
    cout << "Digite una descripcion del producto" << endl;
    cin.getline(description, 50);
    cout << "Digite la talla" << endl;
    cin >> size;
    cout << "Digite la letra 's' si esta disponible para la venta o 'n' si no esta disponible" << endl;
    cin >> stock;
    cout << "Digite el costo de la unidad del zapato" << endl;
    cin >> costUnit;
    cout << "Digite la cantidad de zapatos" << endl;
    cin >> amountShoes;
    cout << "Digite el % de utilidad" << endl;
    cin >> utilityPercent;
    system("cls"); // used to clear the screen

    costTotal = amountShoes * costUnit;
    utilityUnit = costUnit * (utilityPercent / 100);
    utilityTotal = utilityUnit * amountShoes;
    priceUnit = costUnit + utilityUnit;
    priceTotal = amountShoes * priceUnit;

    cout << "==========================================================" << endl;
    cout << "Los datos registrados son los siguientes" << endl;
    cout << "Referencia: " << reference << endl;
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