#include "coord.h"
#include <iostream>

using namespace std;


void Coord::clamp()
{
    if (x < 0) x = 0;
    if (x >= WIDTH) x = WIDTH - 1;
    if (y < 0) y = 0;
    if (y >= HEIGHT) y = HEIGHT - 1;
}

Coord::Coord(int px, int py)
{
    x = px;
    y = py;
    clamp();
}

void Coord::translate(int dx, int dy)
{
    x += dx;
    y += dy;
    clamp();
}

void Coord::moveTo(int px, int py)
{
    x = px;
    y = py;
    clamp();
}

void Coord::print() const
{
    cout << "Posicao: (" << x << ", " << y << ")\n";
}
