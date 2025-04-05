#pragma once
#include <vector>

struct Creature; // forward declaration

struct Cell {
    float X, Y, maxX, maxY;
    std::vector<Creature*> creaturePtrs;

    void add(Creature* c);
    void remove(Creature* c);

    bool contains(float x, float y) const;
};