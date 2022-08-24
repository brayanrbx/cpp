// This program calculates the factorial of a number by using a recursive function.

#include <iostream>
using namespace std;

int factorial(int a);

int main () {
    int x = 5;
    int numFactorial = factorial(x);
    cout << "The factorial of " << x << " is " << numFactorial << endl;
    system ("pause");
	return 0;
}

int factorial(int x) {
    if (x == 0) {
        return 1;
    }
    else {
        return  x * factorial(x - 1);
    }
}