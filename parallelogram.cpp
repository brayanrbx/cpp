// This program calculates the area of a parallelogram.

#include <iostream>
using namespace std;

int main() {
    float area = 0, height = 0, base = 0;

    cout << "Digite la altura del paralelogramo" << endl;
    cin >> height;
    cout << "Digite la base del paralelogramo" << endl;
    cin >> base;

    area = (base * height);

    system("cls"); // used to clear the screen
    cout << "==========================================================" << endl;
    cout << "Figura geometrica paralelogramo" << endl;
    cout << "Tiene un area de: " << area << endl;
    cout << "==========================================================" << endl;
    cout << "Brayan Rincon" << endl;

    system("pause");
    return EXIT_SUCCESS;
};