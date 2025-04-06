#pragma once

#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>  // for M_PI
#include <cmath>

#include <cstdint>

class Creature {

public:

    Creature(uint16_t id, float x, float y, float direction, float energy);

    Creature() : id(-1), x(0.0f), y(0.0f), xvel(0), yvel(0), direction(0.0f), av(0), energy(100), cellX(-1), cellY(-1) { }

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

    void update_position();

    uint16_t id;
    float x, y;
    float xvel, yvel;
    float direction;
    float av;
    float energy;



    int cellX, cellY; // cached last cell



    float const pi = static_cast<float>(M_PI);

private:

};
