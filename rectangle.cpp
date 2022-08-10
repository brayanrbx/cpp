// This program calculates the area of a rectangle.

#include <iostream>
using namespace std;

int main() {
    float area = 0, height = 0, base = 0;

    cout << "Digite la altura del rectangulo" << endl;
    cin >> height;
    cout << "Digite la base del rectangulo" << endl;
    cin >> base;

    area = (base * height);

    system("cls"); // used to clear the screen
    cout << "==========================================================" << endl;
    cout << "Figura geometrica rectangulo" << endl;
    cout << "Tiene un area de: " << area << endl;
    cout << "==========================================================" << endl;
    cout << "Brayan Rincon" << endl;

    system("pause");
    return EXIT_SUCCESS;
};