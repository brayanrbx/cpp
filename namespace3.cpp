// this program demonstrates the use of namespaces

#include <iostream>
using namespace std;

namespace what_a_wonderful_place_for_a_young_sorcerer {
    int troll = 1;
    float wizard = -0.5;
}

namespace Mordor {
    int troll = 2;
    float wizard = 0.5;
}
namespace Hogwarts = what_a_wonderful_place_for_a_young_sorcerer;

int main() {
    cout << Hogwarts::troll << " " <<
        what_a_wonderful_place_for_a_young_sorcerer::wizard << endl;
    cout << Mordor::troll << " " << Mordor::wizard << endl;
    system("pause");
    return 0;
}