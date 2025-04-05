#pragma once

#include <iostream>
#include <cstdint>

struct Creature {
    uint16_t id;
    float x, y;
    float direction;
    float energy;

    int cellX, cellY; // cached last cell
};