#ifndef PLAYER_H
#define PLAYER_H

#include <iostream> 
using namespace std;

class Player{
    private: 
        string name;
        Board playerBoard, opponentBoard;
        int wins;
    public:
        Player();
        Player(string, bool, int, int);
        Player(const Player& rhs);

        void setName(string);
        void setPlayerBoard(Board);
        void setOpponentBoard(Board);
        void setWins(int);

        string getName();
        Board getPlayerBoard();
        Board getOpponentBoard();
        int getWins();

        void placeShips();
        void move(Player*);
        void displayPlayerBoard() const;
        void displayOppBoard() const;

};
#endif