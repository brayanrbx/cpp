// This program calculates the area of a rhombus.

#include <iostream>
using namespace std;

int main() {
    float area = 0, dhigher = 0,  dminor = 0;

    cout << "Digite la diagonal mayor del rombo" << endl;
    cin >> dhigher;
    cout << "Digite la diagonal menor del rombo" << endl;
    cin >> dminor;

    area = (dhigher * dminor) / 2;

    system("cls"); // used to clear the screen
    cout << "==========================================================" << endl;
    cout << "Figura geometrica rombo" << endl;
    cout << "Tiene un area de: " << area << endl;
    cout << "==========================================================" << endl;
    cout << "Brayan Rincon" << endl;

    system("pause");
    return EXIT_SUCCESS;
};