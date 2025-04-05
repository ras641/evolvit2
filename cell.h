#pragma once
#include <vector>

#include <cstdint>

struct Creature; // forward declaration

struct Cell {
    float X, Y, maxX, maxY;
    std::vector<Creature*> creaturePtrs;

    void add(Creature* c);
    void remove(Creature* c);

    bool contains(float x, float y) const;
};