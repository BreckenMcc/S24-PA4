#ifndef PLAYER_H
#define PLAYER_H
#include "board.h"

#include <iostream> 
using namespace std;

template<class T1>
class Player{
    private: 
        string name;
        Board* playerBoard, opponentBoard;
    public:
        Player(){
            name = "";
        }
        Player(string n, Board* pl, Board* opp){
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
        Board getPlayerBoard(){
            return playerBoard;
        }
        Board getOpponentBoard(){
            return opponentBoard;
        }

        void makeMove(Player* opponent){
            bool validMove = false;
            int x, y;
            do(){
                opponent->displayBoard();
                cout << "Input coordinates (x,y) for your move: " << endl;
                getline(cin, x);
                getline(cin, y);
                Coordinate move(x,y);
                if(opponent->checkExistingMove(move) == false){
                    opponent->receiveAttack(move);
                }
            }while(validMove == false);
        }
        void displayPlayerBoard() const{
            
        }
        void displayOppBoard() const{

        }

};
#endif