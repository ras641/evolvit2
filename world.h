#pragma once
#include <unordered_map>
#include <random>
#include "creature.h"
#include "cellgrid.h"

class World {

public:

    World(int xCells, int yCells, int xSize, int ySize);

    void addCreature(float x = 250, float y = 250, float direction = 0.0f, float energy = 100.0f);

    void printCreatures();

    void run();

private:

    std::unordered_map<uint32_t, std::unique_ptr<Creature>> creatures;

    CellGrid cells;

    uint32_t nextID = 1;
};