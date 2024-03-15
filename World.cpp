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

    //buildings do not move, so there's nothing to update there right now


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
    for(Building &building: buildings) // any onbuilding?
    {
        if(building.onBuilding(y,x))
            return true;

    }

    return false;
}

Building * World::buildingBelow(int y,int x)
{
    for(Building& building: buildings)
    {
        if(building.left() < x && building.right() > x) 
            if(y >= building.top())
                return &building;

    }

    return NULL;
}

