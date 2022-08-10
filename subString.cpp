// This program inserts a string into another string at a given position.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "ABCDEF";
	string str2 = str1.substr(1, 1) + str1.substr(4) + str1.substr();

	cout << str2 << endl;
	system("pause");
	return 0;
}