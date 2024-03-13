#include "Building.h"

int Building::top()
{
    return blockSize * nFloors;
}

int Building::left()
{
    return x;
}



bool Building::onBuilding(int y, int x)
{
    return y < coordinateTop() && x > coordinateLeft();
}

bool Building::aboveBuilding(int y,int x)
{
    return y > coordinateTop();
}

void Building::draw()
{
    
}