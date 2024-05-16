#ifndef SHIP_H
#define SHIP_H

#include "coordinate.h"
#include "board.h"
#include <iostream> 
using namespace std;

class Ship{
    private:
        int size;
        bool sunk;
        Coordinate startCoord, endCoord;
    public:
        Ship();
        Ship(int, bool, Coordinate, Coordinate);
        Ship(const Ship& rhs);

        void setSize(int);
        void setSunk(bool);
        void setStart(Coordinate);
        void setEnd(Coordinate);

        int getSize();
        bool getSunk();
        Coordinate getStartCoord();
        Coordinate getEndCoord();

        void setLocation(Coordinate, Coordinate);
};
#endif