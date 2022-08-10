// This program ask a password

#include <iostream>
#include <string>
using namespace std;

int main() {
	string secret = "abracadabra";
	string password;

	cout << "Enter password:" << endl;
	getline(cin, password);
	if (secret == password)
		cout << "Access granted" << endl;
	else
		cout << "Sorry" << endl;
	system("pause");
	return 0;
}