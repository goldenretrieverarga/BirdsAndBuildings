class Bird;
class Building;

#ifndef _WORLD_H_
#define _WORLD_H_

#include <vector>
#include "Bird.h"
#include "Building.h"
#include <SDL2/SDL.h>
using namespace std;

class World
{
    private:
    vector<Bird> birds;
    vector<Building> buildings;

    SDL_Surface * screen;

    public:
    int width;
    int height;
    World(int w, int h);
    bool onBuilding(int y, int x);
    Building * buildingBelow(int y, int x);
    void goToNextFrame();
    void draw();

    
};

#endif
 