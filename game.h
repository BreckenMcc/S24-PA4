#ifndef GAME_H
#define GAME_H

#include <iostream> 
using namespace std;

class Game{
    private:
        Player* playerOne, playerTwo;
        bool gameOver;

    public:
        Game();
        Game(Player*, Player*, bool);
        Game(const Game&);

        void setPlayerOne(Player*);
        void setPlayerTwo(Player*);
        void setGameOver(bool);

        Player* getPlayerOne();
        Player* getPlayerTwo();
        bool getGameOver();

        void startGame();
        void checkWin();
        void endGame();
};
#endif