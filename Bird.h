#ifndef WORLD_H_
#define WORLD_H_

#include "World.h"

enum Movement { DROPPING, FLYING ,DEAD};

class Bird
{

    public:
        int x;
        int y;
        const int speed = 20;
        World * world;
        Movement movement;
        Bird();
        void update();
        void draw();



};

#endif