#include "game.h"
#include "player.h"

Game::Game(){
    playerOne = playerTwo = nullptr;
    gameOver = false;
}
Game::Game(Player* o, Player* t, bool g){
    playerOne = o;
    playerTwo = t;
    gameOver = g;
}
Game::Game(const Game& rhs){
    playerOne = rhs.playerOne;
    playerTwo = rhs.playerTwo;
    gameOver = rhs.gameOver;
}

void Game::setPlayerOne(Player* o){
    playerOne = o;
}
void Game::setPlayerTwo(Player* t){
    playerTwo = t;
}
void Game::setGameOver(bool g){
    gameOver = g;
}

Player* Game::getPlayerOne(){
    return playerOne;
}
Player* Game::getPlayerTwo(){
    return playerTwo;
}
bool Game::getGameOver(){
    return gameOver;
}

void Game::startGame(){
    
}
int Game::checkWin(){
    int playerOneShips, playerTwoShips;

    for(int i = 0; i < playerOne.getPlayerBoard.getNumShips; i++){
        if(!playerOne.getPlayerBoard.getShips[i]){
            playerOneShips++;
        }
    }
    for(int i = 0; i < playerTwo.getPlayerBoard.getNumShips; i++){
        if(!playerTwo.getPlayerBoard.getShips[i]){
            playerTwoShips++;
        }
    }

    if(playerOneShips == 0){
        gameOver = true;
        return 2;
    }
    if(playerTwoShips == 0){
        gameOver = true;
        return 1;
    }

    gameOver = false;
    return 0;
}
void Game::endGame(){

}