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
    return y < top()  && x > left();
}

bool Building::aboveBuilding(int y,int x)
{
    return y > top();
}

void Building::draw()
{
    
}