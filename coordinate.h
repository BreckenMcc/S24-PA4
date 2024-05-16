#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream> 
using namespace std;

class Coordinate{
    private: 
        int xValue, yValue;
        bool hit
    public:
        Coordinate();
        Coordinate(bool, int, int);
        Coordinate(const Coordinate& rhs);

        void setXValue(int);
        void setYValue(int);
        void setHit(bool);

        int getXValue();
        int getYValue();
        bool getHit();

};
#endif