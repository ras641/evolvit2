#include "world.h"

World::World(int xCells, int yCells, int xSize, int ySize) {
    // You can put any initialization here if needed in the future

    c
}

void World::addCreature(int cellX, int cellY, float x, float y, float direction, int energy) {
    Creature c;
    c.id = nextID++;
    c.x = x;
    c.y = y;
    c.direction = direction;
    c.energy = energy;

    // You may assign cellX/cellY here later, or when inserting into a cell
    creatures[c.id] = c;
}