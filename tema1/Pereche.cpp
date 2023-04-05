#include "Pereche.h"

Pereche::Pereche()
{
    this->x = 0;
    this->y = 0;
}

Pereche::Pereche(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Pereche::setX(int x)
{
    this->x = x;
}

void Pereche::setY(int y)
{
    this->y = y;
}

int Pereche::getX()
{
    return this->x;
}

int Pereche::getY()
{
    return this->y;
}
