// This program calculates the area of a trapeze.

#include <iostream>
using namespace std;

int main() {
    float area = 0, lbase = 0, hbase = 0, height = 0;

    cout << "Digite la altura del trapecio" << endl;
    cin >> height;
    cout << "Digite la base superior del trapecio" << endl;
    cin >> lbase;
    cout << "Digite la base inferior del trapecio" << endl;
    cin >> hbase;

    area = ((lbase + hbase) * height) / 2;

    system("cls"); // used to clear the screen
    cout << "==========================================================" << endl;
    cout << "Figura geometrica trapecio" << endl;
    cout << "Tiene un area de: " << area << endl;
    cout << "==========================================================" << endl;
    cout << "Brayan Rincon" << endl;

    system("pause");
    return EXIT_SUCCESS;
};