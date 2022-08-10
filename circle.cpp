// This program calculates the area of a circle.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double area = 0, radius = 0;
    const float PI = 3.14159265;

    cout << "Digite el radio del circulo" << endl;
    cin >> radius;

    area = (PI * (pow(radius, 2)));

    system("cls"); // used to clear the screen
    cout << "==========================================================" << endl;
    cout << "Figura geometrica paralelogramo" << endl;
    cout << "Tiene un area de: " << area << endl;
    cout << "==========================================================" << endl;
    cout << "Brayan Rincon" << endl;

    system("pause");
    return 0;
};