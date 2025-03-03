#include "coord.h"

int main()
{
    Coord screenPosition (500, 500);

    screenPosition.print();

    screenPosition.translate(1500, 700);
    screenPosition.print();

    screenPosition.moveTo(-100, -100);
    screenPosition.print();

    screenPosition.moveTo(1900, 1070);
    screenPosition.print();

    return 0;
}