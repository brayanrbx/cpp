// This program show the multiples of 7

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    cout<<"Los Multiplos de 7 hasta 157 son: \n\n";
    for (int i = 1; i <= 157; i++) {
        if (i % 7 == 0)
            cout << i << endl;
    }
    system ("pause");
    return 0;
}
