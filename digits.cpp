// This program read a number by means of loop and show the number of digits that himself have

#include <iostream>
using namespace std;

int main () {
	int num, n = 0;
	cout << "Ingrese el numero: ";
	cin >> num;
	for (n = 0; num > 0; n++) {
		num /= 10;
	}
	cout << "El numero tiene: " << n << " cifras" << endl;
	system ("pause");
	return 0;
}
