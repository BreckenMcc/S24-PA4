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

}

Board HumanPlayer::getPlayerBoard(){

}

Board HumanPlayer::getOpponentBoard(){

}
    
void HumanPlayer::setName(string){

}

void HumanPlayer::setPlayerBoard(Board){

}

void HumanPlayer::setOpponentBoard(Board){

}