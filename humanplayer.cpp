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