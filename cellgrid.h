#pragma once
#include <vector>
#include "cell.h"
#include "creature.h"

#include <cstdint>

constexpr int WORLD_WIDTH = 500;
constexpr int WORLD_HEIGHT = 500;
constexpr int CELL_SIZE = 25;
constexpr int CELLS_X = WORLD_WIDTH / CELL_SIZE;
constexpr int CELLS_Y = WORLD_HEIGHT / CELL_SIZE;

class CellGrid {
public:

    std::vector<Cell> cells;

    CellGrid();

    CellGrid(int xCells, int yCells, int xSize, int ySize);

    Cell& getCell(int x, int y);

    void run();

    void updateReferences();

    int xCells, yCells, xSize,ySize;

private:

    //void moveCreature(Creature& c, float newX, float newY);
};