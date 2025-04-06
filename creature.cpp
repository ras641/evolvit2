#include "creature.h"

Creature::Creature(uint16_t id, float x, float y, float direction, float energy)
    : id(id), x(x), y(y), xvel(0), yvel(0), direction(direction), av(0), energy(energy), cellX(-1), cellY(-1) {}

uint16_t Creature::getId() const { return id; }
float Creature::getX() const { return x; }
float Creature::getY() const { return y; }
float Creature::getDirection() const { return direction; }
float Creature::getEnergy() const { return energy; }
int Creature::getCellX() const { return cellX; }
int Creature::getCellY() const { return cellY; }

void Creature::setPosition(float newX, float newY) {
    x = newX;
    y = newY;
}

void Creature::setDirection(float newDirection) {
    direction = newDirection;
}

void Creature::setEnergy(float newEnergy) {
    energy = newEnergy;
}

void Creature::setCell(int newCellX, int newCellY) {
    cellX = newCellX;
    cellY = newCellY;
}

void Creature::print() const {
    std::cout << "Creature ID: " << id << "\n"
              << "  Position: (" << x << ", " << y << ")\n"
              << "  Direction: " << direction << " rad\n"
              << "  Energy: " << energy << "\n"
              << "  Cell: (" << cellX << ", " << cellY << ")\n";
}

void Creature::update_position() {

    //x += xvel;

    x += 500;
    y += yvel;

    direction = std::fmodf(direction + av, 2 * pi);
}