// This program ask for a password and check if it is correct

#include <iostream>
#include <string>
using namespace std;

int main() {
	string secret = "abracadabra";
	string password;

	cout << "Enter password:" << endl;
	getline(cin, password);
	if (secret.compare(password) == 0)
		cout << "Access granted" << endl;
	else
		cout << "Sorry" << endl;
	system("pause");
	return 0;
}