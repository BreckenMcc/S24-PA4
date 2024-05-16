#ifndef BOARD_H
#define BOARD_H

#include <iostream> 
using namespace std;

class Board{
    private:
        Ship* ships;
        char grid;
    public:
        Board();
        Board(Ship*, char);
        Board(const Board&);
        ~Board();

        void setShips(Ship*);
        void setGrid(char);

        Ship* getShips();
        char getGrid();

        bool checkValidPlacement(Coordinate, Coordinate);
        void placeShip(Ship, Coordinate, Coordinate);
        void reciveAttack(Coordinate);
        void displayBoard();
};