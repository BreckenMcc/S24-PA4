#ifndef PLAYER_H
#define PLAYER_H

#include <iostream> 
using namespace std;

class Player{
    private: 
        string name;
        bool ai;
        int wins, playerTurn;
    public:
        Player();
        Player(string, bool, int, int);
        Player(const Player& rhs);

        void setName();




}