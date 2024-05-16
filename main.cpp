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
    int x, y, x2, y2;
    bool validPlacement = false;
    Coordinate st(0,0);
    Coordinate end(0,0);
    do{
        playerSelf.displayPlayerBoard();
        cout << endl << "Please pick the starting coodinate for your Carrier (5 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;

        cin >> x;
        cin >> y;
        st.setXValue(x);
        st.setYValue(y);

        cout << endl << "Please pick the ending coodinate for your Carrier (5 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;
        cin >> x2;
        cin >> y2;
        end.setXValue(x2);
        end.setYValue(y2);

        if(st.getYValue() == end.getYValue()){
            if(st.getXValue() < end.getXValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }
        if(st.getXValue() == end.getXValue()){
            if(st.getYValue() < end.getYValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }

        if((st.getYValue() - end.getYValue()) != 5 || (end.getYValue() - st.getYValue()) != 5 || (end.getXValue() - st.getXValue()) != 5 || (st.getXValue() - end.getXValue()) != 5){
            validPlacement = false; 
        }

        if(!validPlacement){
            cout << "Please place your ships correctly" << endl;
        }
    }while(validPlacement == false);

    Ship carrier(5, false, st, end);
    playerSelf.placeShip(carrier, st, end);

    //place Battle Ship
    validPlacement = false;
    do{
        playerSelf.displayPlayerBoard();
        cout << endl << "Please pick the starting coodinate for your Battleship (4 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;

        cin >> x;
        cin >> y;
        st.setXValue(x);
        st.setYValue(y);

        cout << endl << "Please pick the ending coodinate for your Battleship (4 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;
        cin >> x2;
        cin >> y2;
        end.setXValue(x2);
        end.setYValue(y2);

        if(st.getYValue() == end.getYValue()){
            if(st.getXValue() < end.getXValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }
        if(st.getXValue() == end.getXValue()){
            if(st.getYValue() < end.getYValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }

        if((st.getYValue() - end.getYValue()) != 4 || (end.getYValue() - st.getYValue()) != 4 || (end.getXValue() - st.getXValue()) != 4 || (st.getXValue() - end.getXValue()) != 4){
            validPlacement = false; 
        }

        if(!validPlacement){
            cout << "Please place your ships correctly" << endl;
        }
    }while(validPlacement == false);

    Ship battleship(4, false, st, end);
    playerSelf.placeShip(battleship, st, end);

    //place Destroyer
    validPlacement = false;
    do{
        playerSelf.displayPlayerBoard();
        cout << endl << "Please pick the starting coodinate for your Destroyer (3 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;

        cin >> x;
        cin >> y;
        st.setXValue(x);
        st.setYValue(y);

        cout << endl << "Please pick the ending coodinate for your Destryoer (3 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;
        cin >> x2;
        cin >> y2;
        end.setXValue(x2);
        end.setYValue(y2);

        if(st.getYValue() == end.getYValue()){
            if(st.getXValue() < end.getXValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }
        if(st.getXValue() == end.getXValue()){
            if(st.getYValue() < end.getYValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }

        if((st.getYValue() - end.getYValue()) != 3 || (end.getYValue() - st.getYValue()) != 3 || (end.getXValue() - st.getXValue()) != 3 || (st.getXValue() - end.getXValue()) != 3){
            validPlacement = false; 
        }

        if(!validPlacement){
            cout << "Please place your ships correctly" << endl;
        }
    }while(validPlacement == false);

    Ship destroyer(3, false, st, end);
    playerSelf.placeShip(battleship, st, end);

    //place Battle Ship
    validPlacement = false;
    do{
        playerSelf.displayPlayerBoard();
        cout << endl << "Please pick the starting coodinate for your Submarine (3 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;

        cin >> x;
        cin >> y;
        st.setXValue(x);
        st.setYValue(y);

        cout << endl << "Please pick the ending coodinate for your Submarine (3 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;
        cin >> x2;
        cin >> y2;
        end.setXValue(x2);
        end.setYValue(y2);

        if(st.getYValue() == end.getYValue()){
            if(st.getXValue() < end.getXValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }
        if(st.getXValue() == end.getXValue()){
            if(st.getYValue() < end.getYValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }

        if((st.getYValue() - end.getYValue()) != 3 || (end.getYValue() - st.getYValue()) != 3 || (end.getXValue() - st.getXValue()) != 3 || (st.getXValue() - end.getXValue()) != 3){
            validPlacement = false; 
        }

        if(!validPlacement){
            cout << "Please place your ships correctly" << endl;
        }
    }while(validPlacement == false);

    Ship submarine(3, false, st, end);
    playerSelf.placeShip(battleship, st, end);

    //place Battle Ship
    validPlacement = false;
    do{
        playerSelf.displayPlayerBoard();
        cout << endl << "Please pick the starting coodinate for your Patrol Boat (2 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;

        cin >> x;
        cin >> y;
        st.setXValue(x);
        st.setYValue(y);

        cout << endl << "Please pick the ending coodinate for your Patrol Boat (2 spaces)" << endl;
        cout << "Input coordinates (x,y) for your choice: " << endl;
        cin >> x2;
        cin >> y2;
        end.setXValue(x2);
        end.setYValue(y2);

        if(st.getYValue() == end.getYValue()){
            if(st.getXValue() < end.getXValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }
        if(st.getXValue() == end.getXValue()){
            if(st.getYValue() < end.getYValue()){
                validPlacement = playerSelf.checkValidPlacement(st, end);
            }else{
                validPlacement = playerSelf.checkValidPlacement(end, st);
            }
        }

        if((st.getYValue() - end.getYValue()) != 2 || (end.getYValue() - st.getYValue()) != 2 || (end.getXValue() - st.getXValue()) != 2 || (st.getXValue() - end.getXValue()) != 2){
            validPlacement = false; 
        }

        if(!validPlacement){
            cout << "Please place your ships correctly" << endl;
        }
    }while(validPlacement == false);

    Ship patrolBoat(2, false, st, end);
    playerSelf.placeShip(battleship, st, end);


}