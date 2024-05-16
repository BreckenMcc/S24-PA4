#include board.h

Board::Board(){
    Ship* ships = new Ship[];
    char grid[9][9];
}
Board::Board(Ship*, char);
Board::Board(const Board&);
Board::~Board();

void Board::setShips(Ship*);
void Board::setGrid(char);

Ship* Board::getShips();
char Board::getGrid();

bool Board::checkValidPlacement(Coordinate, Coordinate);
void Board::placeShip(Ship, Coordinate, Coordinate);
void Board::reciveAttack(Coordinate);
void Board::displayBoard();