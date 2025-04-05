#include <iostream>
#include "world.h"

using namespace std;

int main() {

    cout << "hello" << endl;

    World world(1,1,500,500);

    world.addCreature();

    return 0;
}