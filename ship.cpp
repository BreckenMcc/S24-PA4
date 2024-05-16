#include ship.h

Ship::Ship(){
    size = 2;
    sunk = false;
    startCoord = null;
    endCoord = null;
}
Ship::Ship(int si, bool su, Coordinate st, Coordinate en){
    size = si;
    sunk = su;
    startCoord = st;
    endCoord = en;
}
Ship::Ship(const Ship& rhs){
    size = rhs.size;
    sunk = rhs.sunk;
    startCoord = rhs.startCoord;
    endCoord = rhs.endCoord;
}

void Ship::setSize(int s){
    size = s;
}
void Ship::setSunk(bool s){
    sunk = s;
}
void Ship::setStart(Coordinate st){
    startCoord = s;
}
void Ship::setEnd(Coordinate en){
    endCoord = en;
}

int Ship::getSize(){
    return size;
}
bool Ship::getSunk(){
    return sunk;
}
Coordinate Ship::getStartLocation(){
    return startCoord;
}
Coordinate Ship::getEndLocation(){
    return endCoord;
}

void Ship::setLocation(Coordinate st, Coordinate en){
    startCoord = st;
    endCoord = en;
}
bool Ship::checkSunk(Board b){
        if(b.checkCoords){
            return true;
        }
    return false;
}