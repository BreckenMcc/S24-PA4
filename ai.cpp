#include "ai.h"

AI::AI(){
    name = "";
}
AI::AI(string nm, Board p, Board o){
    name.= nm;
    playerBoard = p;
    opponentBoard = o;
}

AI::AI(const AI& rhs){
    name = rhs.name;
    playerBoard = rhs.playerBoard;
    opponentBoard = rhs.opponentBoard;
}

string AI::getName(){
    return name;
}
Board AI::getPlayerBoard(){
    return playerBoard;
}

Board AI::getOpponentBoard(){
    return opponentBoard;
}
    
void AI::setName(string n){
    name = n;
}

void AI::setPlayerBoard(Board p){
    playerBoard = p;
}

void AI::setOpponentBoard(Board o){
    opponentBoard = opp;
}

void AI::makeMove(Player* opponent){
            bool validMove = false;
            int x, y;
            do(){
                opponent.displayBoard();
                cout << "Input coordinates (x,y) for your move: " << endl;
                getline(cin, x);
                getline(cin, y);
                Coordinate move(x,y);
                if(oppnent.checkValidPlacement(start, end) == false){
                    opponent.receiveAttack(move)
                }
                }while(validMove == false);
}