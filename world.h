#pragma once
#include <unordered_map>
#include <random>
#include "creature.h"
#include "cellgrid.h"

class World {

public:

    std::unordered_map<uint32_t, Creature> creatures;

    CellGrid cells;

    uint32_t nextID = 1;

    World(int xCells, int yCells, int xSize, int ySize);

    void addCreature(int cellX = 0, int cellY = 0, float x = 250, float y = 250, float direction = 0.0f, int energy = 100);
};