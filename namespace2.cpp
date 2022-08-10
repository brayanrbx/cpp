// This program show the use of namespace.

#include <iostream>
using namespace std;

namespace {
    int troll = 1;
    float wizard = -0.5;
}

namespace Mordor {
    int troll = 2;
    float wizard = 0.5;
}

int main() {
    cout << troll << " " << wizard << endl;
    cout << Mordor::troll << " " << Mordor::wizard << endl;
    system("pause");
    return 0;
}