// This program show the invert of a number

#include <iostream>
using namespace std;

int main () {
	int n, residuo, invertido = 0, i;
	cout << "Ingrese el numero: ";
	cin >> n;
	for (i = 0; n != 0; i++) {
		residuo = n % 10;
		n /= 10;
		invertido = (invertido * 10) + residuo;
	}
	cout << "El numero Invertido es: "<< invertido << endl;
	system ("pause");
	return 0;
}
