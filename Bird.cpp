#include "Bird.h"

Bird::Bird()
{
    movement = FLYING;
}

void Bird::update()
{
    if(movement == FLYING)
    {
        if(this->world->onBuilding(this->x,this->y))
        {
            movement = DROPPING;
        }
        else
        {
            fly();
        }
    }

    else if(movement == DROPPING)
    {
        int bottom = 0;
        Building * b = this->world->buildingBelow(y,x);
        if(b != NULL)
            bottom = b->top();
        if(y < bottom)
        {
            movement = DEAD;
        }
        else
        {
            drop();
        }

    }


}

void Bird::fly()
{
    x += this->speed;
}

void Bird::drop()
{
    y -= this->speed;
}
