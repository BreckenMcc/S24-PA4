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

    //place Carrier Ship
    int x, y;
    bool validPlacement = false;
    do(){
        playerSelf.displayPlayerBoard();
        cout << endl << "Please pick the starting coodinate for your Carrier (5 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;

        getline(cin, x);
        getline(cin, y);
        Coordinate start(x,y);

        cout << endl << "Please pick the ending coodinate for your Carrier (5 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;
        getline(cin, x);
        getline(cin, y);
        Coordinate end(x,y);

        if(start.getYValue == end.getYValue){
            if(start.getXValue < end.getXValue){
                validPlacement = playerSelf.checkValidPlacement(start, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, start);
            }
        }
        if(start.getXValue == end.getXValue){
            if(start.getYValue < end.getYValue){
                validPlacement = playerSelf.checkValidPlacement(start, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, start);
            }
        }

        if((start.getYValue - end.getYValue) != 5 || (end.getYValue - start.getYValue) != 5 || (end.getXValue - start.getXValue) != 5 || (start.getXValue - end.getXValue) != 5){
            validPlacement = false; 
        }

        if(!validPlacement){
            cout << "Please place your ship correctly" << endl;
        }
    }while(validPlacement == false);

    ship carrier(5, false, start, end);
    playerSelf.placeShip(carrier);

    //Place Battleship
    validPlacement = false;
    do(){
        playerSelf.displayPlayerBoard();
        cout << endl << "Please pick the starting coodinate for your Battleship (4 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;

        getline(cin, x);
        getline(cin, y);
        Coordinate start(x,y);

        cout << endl << "Please pick the ending coodinate for your Battleship (5 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;
        getline(cin, x);
        getline(cin, y);
        Coordinate end(x,y);

        if(start.getYValue == end.getYValue){
            if(start.getXValue < end.getXValue){
                validPlacement = playerSelf.checkValidPlacement(start, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, start);
            }
        }
        if(start.getXValue == end.getXValue){
            if(start.getYValue < end.getYValue){
                validPlacement = playerSelf.checkValidPlacement(start, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, start);
            }
        }

        if((start.getYValue - end.getYValue) != 4 || (end.getYValue - start.getYValue) != 4 || (end.getXValue - start.getXValue) != 4 || (start.getXValue - end.getXValue) != 4){
            validPlacement = false; 
        }

        if(!validPlacement){
            cout << "Please place your ship correctly" << endl;
        }
    }while(validPlacement == false);

    ship battleship(4, false, start, end);
    playerSelf.placeShip(battleship);

}