#pragma once
#include <vector>

#include <cstdint>

#include "creature.h"

class Cell {

public:

    float X, Y, maxX, maxY;
    std::vector<Creature*> creaturePtrs;

    void add(Creature* c);
    //void remove(Creature* c);

    bool contains(float x, float y) const;

    void run();

    void run_creatures();

    void run_collisions();
};