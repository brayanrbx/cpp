// This program fill an array without repeat the same number

#include <iostream>
using namespace std;
bool rep (int num, int i);

int v[10];

int main () {
	int num, i;
	for (i = 0; i < 10; i++) {
		cout << "Ingrese el numero " << i + 1 << ": ";
		cin >> num;
		while (rep (num, i)) {
			cout << "El numero ya existe" << endl
				<< "digite otro numero ";
			cin >> num;
		}
		v[i] = num;
	}
	system ("pause");
	return 0;
}

bool rep (int num, int i) {
	int j;
	for (j = 0; j < i; j++) {
		if (num == v[j]) {
			return true;
		}
	}
	return false;
}




