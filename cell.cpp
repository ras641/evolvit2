#include "cell.h"

// actual definition needed here

void Cell::add(Creature* c) {
    creaturePtrs.push_back(c);
}

/*
void Cell::remove(Creature* c) {
    auto it = std::find(creaturePtrs.begin(), creaturePtrs.end(), c);
    if (it != creaturePtrs.end()) creaturePtrs.erase(it);
}
*/

bool Cell::contains(float x, float y) const {
    return x >= X && x < maxX && y >= Y && y < maxY;
}

void Cell::run() {

    run_creatures();
}

void Cell::run_creatures() {

    for (auto& c : creaturePtrs) {

        c->update_position();
    }
}

void Cell::run_collisions() {

    //use apply_force. will define later
}