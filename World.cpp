#include "World.h"

World::World(int w, int h)
{
    width = w;
    height = h;
}

void World::goToNextFrame()
{
    for (Bird &bird : birds)
    {
        bird.update();
    }


}

void World::draw()
{
    for (Building &building: buildings)
    {
        building.draw();
    }

    for(Bird &bird: birds)
    {
        bird.draw();
    }

}

bool World::onBuilding(int y,int x)
{
    for(Building &building: buildings)
    {
        if(building.onBuilding(y,x))
            return true;

    }

    return false;
}

Building * World::buildingBelow(int x)
{
    for(Building& building: buildings)
    {
        return &building;
    }

    return NULL;
}

