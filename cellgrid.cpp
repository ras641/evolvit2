#include "cellgrid.h"

CellGrid::CellGrid() {
    // Default constructor: empty grid
}

CellGrid::CellGrid(int xCells, int yCells, int cellWidth, int cellHeight)

{
    cells.resize(xCells * yCells);

    for (int y = 0; y < yCells; ++y) {
        for (int x = 0; x < xCells; ++x) {
            Cell& cell = cells[y * xCells + x];
            cell.X = x * cellWidth;
            cell.maxX = (x + 1) * cellWidth;
            cell.Y = y * cellHeight;
            cell.maxY = (y + 1) * cellHeight;
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