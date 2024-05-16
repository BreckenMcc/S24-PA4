#ifndef BOARD_H
#define BOARD_H
#include "ship.h"

#include <iostream> 
using namespace std;

class Board{
    private:
        char** grid;
        Ship* ships = new Ship[10];
        int numShips, maxShips;
    public:
        Board();
        Board(Ship*, char*, int, int);
        Board(const Board&);
        ~Board();
        //Board& operator=(const Board& rhs);

        void setShips(Ship*, int, int);
        void setGrid(char**);
        void setNumShips(int);
        void setMaxShips(int);

        Ship* getShips();
        char** getGrid();
        int getNumShips();
        int getMaxShips();

        bool checkExistingMove(Coordinate);
        bool checkValidPlacement(Coordinate, Coordinate);
        void placeShip(Ship, Coordinate, Coordinate);
        void receiveAttack(Coordinate);
        void displayPlayerBoard();
        void displayOppBoard();
        void checkSunk(Ship);
};
#endif