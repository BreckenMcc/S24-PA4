#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream> 
using namespace std;

class Coordinate{
    private: 
        int xValue, yValue;
    public:
        Coordinate();
        Coordinate(bool, int, int);
        Coordinate(const Coordinate& rhs);

        void setXValue(int);
        void setYValue(int);

        int getXValue();
        int getYValue();

};
#endif