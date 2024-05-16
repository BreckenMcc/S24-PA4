#include coordinate.h

Coordinate::Coordinate(){
    xValue, yValue = 0;
    hit = false;
}
Coordinate::Coordinate(bool h, int x, int y){
    xValue = x;
    yValue = y;
    hit = h;
}
Coordinate::Coordinate(const Coordinate& rhs){
    xValue = rhs.xValue;
    yValue = rhs.yValue;
    hit = rhs.hit;
}

void Coordinate::setXValue(int x){
    xValue = x;
}
void Coordinate::setYValue(int y){
    yValue = y;
}
void Coordinate::setHit(bool h){
    hit = h;
}

int Coordinate::getXValue(){
    return xValue;
}
int Coordinate::getYValue(){
    return yValue;
}
bool Coordinate::getHit(){
    return hit;
}
