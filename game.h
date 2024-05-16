#ifndef GAME_H
#define GAME_H
#include "player.h"

#include <iostream> 
using namespace std;

class Game{
    private:
        Player<Board> *playerOne, *playerTwo;
        bool gameOver;

    public:
        Game();
        Game(Player<Board>*, Player<Board>*, bool);
        Game(const Game&);

        void setPlayerOne(Player<Board>*);
        void setPlayerTwo(Player<Board>*);
        void setGameOver(bool);

        Player<Board>* getPlayerOne();
        Player<Board>* getPlayerTwo();
        bool getGameOver();

        void startGame();
        int checkWin();
        void endGame();
};
#endif