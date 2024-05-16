#include "humanplayer.h"

HumanPlayer::HumanPlayer(){
    name = "";
}

HumanPlayer::HumanPlayer(string nm, Board p, Board opp){
    name = nm;
    playerBoard  = p;
    opponentBoard = opp;
}

HumanPlayer::HumanPlayer(const HumanPlayer& rhs){
    name = rhs.name;
    playerBoard = rhs.playerBoard;
}

string HumanPlayer::getName(){
    return name;
}

Board HumanPlayer::getPlayerBoard(){
    return playerBoard;
}

Board HumanPlayer::getOpponentBoard(){
    return opponentBoard;
}
    
void HumanPlayer::setName(string nm){
    name = nm
}

void HumanPlayer::setPlayerBoard(Board p){
    playerBoard = p;
}

void HumanPlayer::setOpponentBoard(Board opp){
    opponentBoard = opp;
}

void HumanPlayer::makeMove(Player* opponent){
    Player::makeMove();
    opponent->getPlayerBoard()->displayOpponentBoard();

    cout << "Input coordinates (x,y) for your move: " << endl;
    getline(cin, x);
    getline(cin, y);
    Coordinate move(x,y);
    if(opponent->checkExistingMove(move) == false){
         opponent->receiveAttack(move);
    }
    else{
        makeMove(opponent);
    }
}