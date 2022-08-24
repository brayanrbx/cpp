// This program print the multiplication table of a given number.

#include <iostream>
using namespace std;

int main () {
    int op;
    while (true) {
        for (int i = 1; i < 10; i++) {
            cout << i << "." << " Tabla del " << i <<  endl;
        }
        cout << "Digite la opcion que desea: ";
        cin >> op;
        for (int i = 1; i < 10; i++) {
            cout << op << " x " << i << " = " << op * i << endl;
        }
        break;
    }
    system ("pause");
    return 0;
}