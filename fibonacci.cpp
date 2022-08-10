// This program says if a number belong the fibonacci sequence

#include <iostream>
using namespace std;

int main () {
	int x, y, res, n, i, count = 0;
    cout << "Introduce un numero: ";
    cin >> n;
    i = 3;
    x = 0;
    y = 1;
    while (i < 20) {
        res = x + y;
        x = y;
        y = res;
        i++;
        if (res == n || n <= 3){
			count++;
		}
    }
	if (count >= 1) {
		cout << "El numero pertence a la serie fibonacci: " << n << endl;
	}
	else {
		cout << "no pertenece a la serie Fibonnaci" << endl;
	}
	system ("pause");
	return 0;
}
