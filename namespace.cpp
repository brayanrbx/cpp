// This program show the use of namespace

#include <iostream>
using namespace std;

namespace Hogwarts {
    int troll = 1;
}

namespace Mordor {
    int troll = 2;
}

namespace Hogwarts {
    float wizard = -0.5;
}

namespace Mordor {
    float wizard = 0.5;
}

int main() {
    cout << Hogwarts::troll << " " << Hogwarts::wizard << endl;
    cout << Mordor::troll << " " << Mordor::wizard << endl;
    system("pause");
    return 0;
}