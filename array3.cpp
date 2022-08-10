// This program store a password in the array

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main () {
	char con [5] = {'a', '5', 'c', 'D', 'm'};
	char pass [5];
	int i, j, x, cont = 3;
	cout << "Introduce the password: ";
	for (i = 5; i > 0; i--) {
		pass [i] = getch ();
		cout << "*";
	}
	for (j = 0; j < 5; j++) {
		if (con[j] == pass[j]) {
			cout << endl << "The password is correct" << endl;
			break;
		}
		else {
			cout << endl << "The password is incorrect" << endl;
			break;
		}
	}
	system ("pause");
	return 0;
}








