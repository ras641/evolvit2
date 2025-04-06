#include "cellgrid.h"

CellGrid::CellGrid() {
    // Default constructor: empty grid
}

CellGrid::CellGrid(int xCells, int yCells, int xSize, int ySize)
    : xCells(xCells), yCells(yCells), xSize(xSize), ySize(ySize)
{
    cells.resize(xCells * yCells);

    for (int y = 0; y < yCells; ++y) {
        for (int x = 0; x < xCells; ++x) {
            Cell& cell = cells[y * xCells + x];
            cell.X = x * xSize;
            cell.maxX = (x + 1) * xSize;
            cell.Y = y * ySize;
            cell.maxY = (y + 1) * ySize;
        }
    }
}

void CellGrid::run() {

    for (int y = 0; y < yCells; ++y) {
        for (int x = 0; x < xCells; ++x) {
            int index = y * xCells + x;
            Cell& cell = cells[index];

            cell.run();

        }
    }
}

void CellGrid::updateReferences() {

    for (int y = 0; y < yCells; ++y) {
        for (int x = 0; x < xCells; ++x) {
            int index = y * xCells + x;
            Cell& cell = cells[index];

            for (Creature* creature : cell.creaturePtrs) {

                int expectedCellX = static_cast<int>(creature->x) / xSize;
                int expectedCellY = static_cast<int>(creature->y) / xSize;

                std::cout << "Iterating Cell (" << x << ", " << y << ") | "
                    << "Creature Stored Cell (" << creature->cellX << ", " << creature->cellY << ") | "
                    << "Calculated Cell (" << expectedCellX << ", " << expectedCellY << ")\n";
            }
        }
    }
}

/*
Cell& CellGrid::getCell(int x, int y) {
    return cells[y * CELLS_X + x];
}
*/

/*
void CellGrid::moveCreature(Creature& c, float newX, float newY) {
    int oldX = c.cellX;
    int oldY = c.cellY;

    int newCellX = static_cast<int>(newX) / CELL_SIZE;
    int newCellY = static_cast<int>(newY) / CELL_SIZE;

    if (newCellX != oldX || newCellY != oldY) {
        getCell(oldX, oldY).remove(&c);
        getCell(newCellX, newCellY).add(&c);
        c.cellX = newCellX;
        c.cellY = newCellY;
    }

    c.x = newX;
    c.y = newY;
}
*/