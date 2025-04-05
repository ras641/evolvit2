#include <cstdint>
#include "world.h"

World::World(int xCells, int yCells, int xSize, int ySize) {
    // You can put any initialization here if needed in the future

    CellGrid(xCells,yCells,xSize,ySize);
}

void World::addCreature(int cellX, int cellY, float x, float y, float direction, float energy) {

    uint16_t id = nextID++;
    Creature c(id, x, y, direction, energy);
    //c.setCell(cellX, cellY);

    creatures[id] = c;
}