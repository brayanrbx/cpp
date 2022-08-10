// This program read a number and print the first 5 numbers precede it

#include <iostream>
using namespace std;

int main () {
	int numero, i, j, aux, suma = 0, cont = 0;
	cout << "Ingrese el numero mayor o igual a 13: ";
	cin >> numero;
	for (i = numero; i > 1; i--) {
		aux = 0;
        for (j = i; j > 1 && aux <= 2; j--) {
            if (i % j == 0) {
                aux++;
            }
        }
        if (aux < 2) {
			cont++;
			if (cont > 1 && cont <= 6) {
				suma += i;
			}
        }
	}
	if (numero < 13) {
		cout << "Error, el numero debe ser >= 13" << endl;
	}
	else {
		cout << "La suma de los numeros primos es: " << suma <<endl;
		cout << "La cantidad de numeros es: " << cont <<endl;
	}
	system ("pause");
	return 0;
}
