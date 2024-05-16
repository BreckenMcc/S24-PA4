#include <cstdlib>
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

int AI::randomNum(int min, int max){
    return min + rand() % (max - min + 1);
}

void AI::makeMove(Player* opponent){
    Player::makeMove();
    Coordinate move = chooseMove();

    if(opponent->getPlayerBoard()->checkExistingMove() == false){
        opponent->getPlayerBoard()->receiveAttack(move);
    }
    else{
        makeMove(opponent);
    }
}

Coordinate AI::chooseMove(){
    int x = randomNum(0, 10);
    int y = randomNum(0, 10);
    return Coordinate(x,y);
}