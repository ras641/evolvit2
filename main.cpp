#include <iostream>
#include "world.h"

using namespace std;

int main() {

    cout << "hello" << endl;

    World world(20,20,500,500);

    world.addCreature(1000,1000);

    world.printCreatures();

    world.run();

    return 0;
}