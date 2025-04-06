#include <cstdint>
#include "world.h"

World::World(int xCells, int yCells, int xSize, int ySize)
    : cells(xCells, yCells, xSize, ySize) // initializes the CellGrid with given params
{
    // any other initialization logic here
}

void World::addCreature(float x, float y, float direction, float energy) {
    uint16_t id = nextID++;

    auto creature = std::make_unique<Creature>(id, x, y, direction, energy);

    int cellX = static_cast<int>(x) / cells.xSize;
    int cellY = static_cast<int>(y) / cells.ySize;

    creature->cellX = cellX;
    creature->cellY = cellY;

    Creature* cPtr = creature.get(); // raw pointer before move
    creatures[id] = std::move(creature);

    cells.cells[cellY * cells.xCells + cellX].add(cPtr);
}

void World::printCreatures() {

    for (auto& pair : creatures) {

        pair.second.print();
    }
}

void World::run() {

    while (true) {

        cells.run();

        cells.updateReferences();

        std::cin.get();
    }
}