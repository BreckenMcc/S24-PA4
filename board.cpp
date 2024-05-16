#include "board.h"


Board::Board(){
    Ship* ships = new Ship[5];
    char grid[9][9];
    numShips = 0;
    maxShips = 5;
}
Board::Board(Ship* s, char* b, int n, int m){
    Ship* ships = new Ship[m];
    for(int i = 0; i < n; i++){
        ships[i]=s[i];
    }
    board = b;
    numShips = n;
    maxShips = m;
}
Board::Board(const Board& rhs){
    Ship* ships = new Ship[rhs.maxShips];
    for(int i = 0; i < rhs.numShips; i++){
        ships[i]=rhs.ships[i];
    }
    board = rhs.board;
    numShips = rhs.numShips;
    maxShips = rhs.maxShips;
}
Board::~Board(){
    delete [] ships;
}

void Board::setShips(Ship* s, int n, int m){
    Ship* ships = new Ship[m];
    for(int i = 0; i < n; i++){
        ships[i]=s[i];
    }

    numShips = n;
    maxShips = m;
}
void Board::setGrid(char* g){
    grid = g;
}
void setNumShips(int n){
    numShips = n;
}
void setMaxShips(int m){
    maxShips = m;
}

Ship* Board::getShips(){
    return ships;
}
*char Board::getGrid(){
    return grid;
}
int getNumShips(){
    return numShips;
}
int getMaxShips(){
    return maxShips;
}


bool Board::checkExistingMove(Coordinate c){
    if(grid[c.getXValue][c.getYValue] == 'X' || grid[c.getXValue][c.getYValue] == 'O'){
        count << "This coordinate has already been attacked" << endl;
        return true;
    }else{
        return false;
    }
}
bool Board::checkValidPlacement(Coordinate start, Coordinate end){
    if(start.getXValue != end.getXValue && start.getYValue != end.getYValue){
        return false;
    }
    if(start.getXValue > 9 || start.getYValue > 9 || end.getXValue > 9 || end.getYValue > 9 || start.getXValue < 0 || start.getYValue < 0 || end.getXValue < 0 || end.getYValue < 0 ){
        return false;
    }
    for(int i = start.getXValue; i < end.getXValue; i++){
        if(grid[i][start.getYValue] != ''){
            return false;
        }
    }
    for(int i = start.getYValue; i < end.getYValue; i++){
        if(grid[start.getXValue][i] != ''){
            return false;
        }
    }

    return true;

}
void Board::placeShip(Ship s){
    if(s.getStartCoord.getXValue == s.getEndCoord.getXValue){
        for(int i = s.getStartCoord.getYValue; i < s.getEndCoord.getYValue; i++){
            grid[s.getStartCoord.getXValue][i] = static_cast<char>(s.getSize + 48);
        }
    }
    if(s.getStartCoord.getYValue == s.getEndCoord.getYValue){
        for(int i = s.getStartCoord.getXValue; i < s.getEndCoord.getXValue; i++){
            grid[i][s.getStartCoord.getYValue] = static_cast<char>(s.getSize + 48);
        }
    }

    if(numShips == maxShips){
        maxShips++;

        Ship* temp = new Ship[maxShips];
        for(int i = 0; i < numShips; i++){
            temp[i] = ships[i];
        }
        delete [] ships;
        ships = temp;
    }

    ships[numShips] = s;
    numShips++
}
void Board::reciveAttack(Coordinate c){
    if(grid[c.getXValue][c.getYValue] != '' || grid[c.getXValue][c.getYValue] != 'X' || grid[c.getXValue][c.getYValue] != 'O'){
        grid[c.getXValue][c.getYValue] = 'X';
    }
}
void Board::displayPlayerBoard(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; i++){
            cout << "[";
            if(grid[i][j] != ''){
                cout << grid[i][j];
            }else{
                cout << ' ';
            }
            cout << "]";
        }
        cout << endl;
    }
}
void Board::displayOppBoard(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; i++){
            cout << "[";
            if(grid[i][j] == 'X' || grid[i][j] == 'O'){
                cout << grid[i][j];
            }else{
                cout << ' ';
            }
            cout << "]";
        }
        cout << endl;
    }
}
void Board::checkSunk(Ship s){
    if(s.getStartCoord.getXValue == s.getEndCoord.getXValue){
        for(int i = s.getStartCoord.getYValue; i < s.getEndCoord.getYValue; i++){
            if(grid[s.getStartCoord.getXValue][i] != 'X')
                s.setSunk(true);
        }
    }
    if(s.getStartCoord.getYValue == s.getEndCoord.getYValue){
        for(int i = s.getStartCoord.getXValue; i < s.getEndCoord.getXValue; i++){
            if(grid[i][s.getStartCoord.getYValue] != 'X')
                s.setSunk(true);
        }
    }

    s.setSunk(false);
}