#include "board.h"


Board::Board(){
    Ship* ships = new Ship[5];
    grid = new char*[9];
    for(int i = 0; i < 9; i++){
        grid[i] = new char[9];
    }
    numShips = 0;
    maxShips = 5;
}
Board::Board(Ship* s, char* b, int n, int m){
    Ship* ships = new Ship[m];
    for(int i = 0; i < n; i++){
        ships[i]=s[i];
    }
    numShips = n;
    maxShips = m;
}
Board::Board(const Board& rhs){
    Ship* ships = new Ship[rhs.maxShips];
    for(int i = 0; i < rhs.numShips; i++){
        ships[i]=rhs.ships[i];
    }
    grid = rhs.grid;
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
void Board::setGrid(char** g){
    grid = g;
}
void Board::setNumShips(int n){
    numShips = n;
}
void Board::setMaxShips(int m){
    maxShips = m;
}

Ship* Board::getShips(){
    return ships;
}
char** Board::getGrid(){
    return grid;
}
int Board::getNumShips(){
    return numShips;
}
int Board::getMaxShips(){
    return maxShips;
}


bool Board::checkExistingMove(Coordinate c){
    if(grid[c.getXValue()][c.getYValue()] == 'X' || grid[c.getXValue()][c.getYValue()] == 'O'){
<<<<<<< HEAD
        cout << "This coordinate has already been attacked" << endl;
=======
        count << "This coordinate has already been attacked" << endl;
>>>>>>> 8cf53eba4ea8c360778c15a3ba507e72b738bd41
        return true;
    }else{
        return false;
    }
}
bool Board::checkValidPlacement(Coordinate start, Coordinate end){
    if(start.getXValue() != end.getXValue() && start.getYValue() != end.getYValue()){
        return false;
    }
    if(start.getXValue() > 9 || start.getYValue() > 9 || end.getXValue() > 9 || end.getYValue() > 9 || start.getXValue() < 0 || start.getYValue() < 0 || end.getXValue() < 0 || end.getYValue() < 0 ){
        return false;
    }
<<<<<<< HEAD
    for(int i = start.getXValue(); i < end.getXValue(); i++){
        if(grid[i][start.getYValue()] != '\0'){
=======
    for(int i = start.getXValue(); i < end.getXValue; i++){
        if(grid[i][start.getYValue()] != ''){
>>>>>>> 8cf53eba4ea8c360778c15a3ba507e72b738bd41
            return false;
        }
    }
    for(int i = start.getYValue(); i < end.getYValue(); i++){
<<<<<<< HEAD
        if(grid[start.getXValue()][i] != '\0'){
=======
        if(grid[start.getXValue()][i] != ''){
>>>>>>> 8cf53eba4ea8c360778c15a3ba507e72b738bd41
            return false;
        }
    }

    return true;

}
void Board::placeShip(Ship s, Coordinate st, Coordinate end){
    if(s.getStartCoord().getXValue() == s.getEndCoord().getXValue()){
        for(int i = s.getStartCoord().getYValue(); i < s.getEndCoord().getYValue(); i++){
            grid[s.getStartCoord().getXValue()][i] = static_cast<char>(s.getSize() + 48);
        }
    }
    if(s.getStartCoord().getYValue() == s.getEndCoord().getYValue()){
        for(int i = s.getStartCoord().getXValue(); i < s.getEndCoord().getXValue(); i++){
            grid[i][s.getStartCoord().getYValue()] = static_cast<char>(s.getSize() + 48);
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
    numShips++;
}
void Board::receiveAttack(Coordinate c){
    if(grid[c.getXValue()][c.getYValue()] != '\0' || grid[c.getXValue()][c.getYValue()] != 'X' || grid[c.getXValue()][c.getYValue()] != 'O'){
        grid[c.getXValue()][c.getYValue()] = 'X';
    }
}
void Board::displayPlayerBoard(){
    cout << "  A  B  C  D  E  F  G  H  I  J" << endl;
    for(int i = 0; i < 9; i++){
        cout << i++;
        for(int j = 0; j < 9; i++){
            cout << "[";
            if(grid[i][j] != '\0'){
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
    cout << "  A  B  C  D  E  F  G  H  I  J" << endl;
    for(int i = 0; i < 9; i++){
        cout << i++;
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
    if(s.getStartCoord().getXValue() == s.getEndCoord().getXValue()){
        for(int i = s.getStartCoord().getYValue(); i < s.getEndCoord().getYValue(); i++){
            if(grid[s.getStartCoord().getXValue()][i] != 'X')
                s.setSunk(true);
        }
    }
    if(s.getStartCoord().getYValue() == s.getEndCoord().getYValue()){
        for(int i = s.getStartCoord().getXValue(); i < s.getEndCoord().getXValue(); i++){
            if(grid[i][s.getStartCoord().getYValue()] != 'X')
                s.setSunk(true);
        }
    }

    s.setSunk(false);
}

// Board& operator=(const Board& rhs){
//     Ship* ships = new Ship[rhs.maxShips];
//     for(int i = 0; i < rhs.numShips; i++){
//         ships[i]=rhs.ships[i];
//     }
//     grid = rhs.grid;
//     numShips = rhs.numShips;
//     maxShips = rhs.maxShips;
//     return *this;
// }