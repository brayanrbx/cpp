// This program fill an array and then print the higher

#include <iostream>
using namespace std;

int main () {
	int max[10], i, mayor;
	for (i = 0; i < 10; i++) {
		cout << "Ingrese el numero " << i + 1 << ": ";
		cin >> max [i];
		if(max[i] > mayor) {
			mayor = max[i];
		}
	}
	cout << "El numero mayor en el array es: " << mayor << endl;
	system ("pause");
	return 0;
}
