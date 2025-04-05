#pragma once

#include <iostream>

#include <cstdint>

class Creature {
public:
    Creature(uint16_t id, float x, float y, float direction, float energy);

    Creature() : id(-1), x(0.0f), y(0.0f), direction(0.0f), energy(100) { }

    // Getters
    uint16_t getId() const;
    float getX() const;
    float getY() const;
    float getDirection() const;
    float getEnergy() const;
    int getCellX() const;
    int getCellY() const;

    // Setters
    void setPosition(float x, float y);
    void setDirection(float direction);
    void setEnergy(float energy);
    void setCell(int cellX, int cellY);

    void print() const;

private:
    uint16_t id;
    float x, y;
    float direction;
    float energy;

    int cellX, cellY; // cached last cell
};
