#include "player.h"
#include "humanplayer.h"
#include "ai.h"
#include "board.h"
#include "coordinate.h"
#include <iostream>
#include <cstdlib>

int main(){
    Board playerSelf, playerOpp, aiSelf, aiOpp;
    HumanPlayer* user = new HumanPlayer("user", playerSelf, aiOpp);
    AI computer("computer", aiSelf, playerOpp);

    cout << "Welcome to Battleship!" << endl << "Here is your board!" << endl;

    //place Carrier Ship
    int x, y;
    cin >> x;
    cin >> y;
    Coordinate start(x,y);
}