// This program say if one string is inside another string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "My name is Bond, James Bond.";
    string we_need_him = "James";

    if (greeting.find(we_need_him) != string::npos)
        cout << "OMG! He's here!" << endl;
    else
        cout << "It's not him." << endl;

    int comma = greeting.find(',');
    if (comma != string::npos)
        cout << "Interesting. He used a comma." << endl;

    system("pause");
    return 0;
}