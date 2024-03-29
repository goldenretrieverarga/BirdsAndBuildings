class World;
#ifndef _BUILDING_H_
#define _BUILDING_H_

#include "World.h"

#define BLOCKSIZE 20


class Building
{
    public:
    const int width = 20;
    int nFloors;
    int x;
    int blockSize;
    
    void draw();
    int top();
    int left();
    int bottom();
    int right();
    bool onBuilding(int y, int x);
    bool aboveBuilding(int y, int x);



};

#endif