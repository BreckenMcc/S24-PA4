#include "coordinate.h"

Coordinate::Coordinate(){
    xValue, yValue = 0;
}
Coordinate::Coordinate(int x, int y){
    xValue = x;
    yValue = y;
}
Coordinate::Coordinate(const Coordinate& rhs){
    xValue = rhs.xValue;
    yValue = rhs.yValue;
}

void Coordinate::setXValue(int x){
    xValue = x;
}
void Coordinate::setYValue(int y){
    yValue = y;
}

int Coordinate::getXValue(){
    return xValue;
}
int Coordinate::getYValue(){
    return yValue;
}
