#ifndef PLAYER_H
#define PLAYER_H
#include "board.h"

#include <iostream> 
using namespace std;

template<class T>
class Player{
    private: 
        string name;
        Board *playerBoard, *opponentBoard;
    public:
        Player<T>(){
            name = "";
        }
        Player<T>(string n, Board* pl, Board* opp){
            name = n;
            playerBoard = pl;
            opponentBoard = opp;
        }
        Player<T>(const Player& rhs){
            name = rhs.name;
            playerBoard = rhs.playerBoard;
            opponentBoard = rhs.opponentBoard;
        }

        void setName(string nm){
            name = nm;
        }
        void setPlayerBoard(Board pl){
            playerBoard = pl;
        }
        void setOpponentBoard(Board opp){
            opponentBoard = opp;
        }

        string getName(){
            return name;
        }
        Board* getPlayerBoard(){
            return playerBoard;
        }
        Board* getOpponentBoard(){
            return opponentBoard;
        }

        void virtual makeMove(Player* opponent) = 0;
};
#endif