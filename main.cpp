#include "player.h"
#include "humanplayer.h"
#include "ai.h"
#include "board.h"
#include "coordinate.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

int main(){
    Board playerSelf, playerOpp, aiSelf, aiOpp;
    HumanPlayer* user = new HumanPlayer("user", playerSelf, aiOpp);
    AI computer("computer", aiSelf, playerOpp);

    cout << "Welcome to Battleship!" << endl << "Here is your board!" << endl;
    playerSelf.displayPlayerBoard();
    cout << endl << "Please pick the starting coodinate for your Carrier ship (5 spaces)" << endl;
    cout << "Input coordinates (x,y) for your choice: " << endl;
    
    int x, y;
    getline(cin, x);
    getline(cin, y);
    Coordinate start(x,y);
}