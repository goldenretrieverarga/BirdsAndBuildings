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
    void goToNextFrame();
    void draw();

    
};