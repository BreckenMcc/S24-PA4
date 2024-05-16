#include "game.h"


Game::Game(){
    playerOne = playerTwo = nullptr;
    gameOver = false;
}
Game::Game(Player<Board>* o, Player<Board>* t, bool g){
    playerOne = o;
    playerTwo = t;
    gameOver = g;
}
Game::Game(const Game& rhs){
    playerOne = rhs.playerOne;
    playerTwo = rhs.playerTwo;
    gameOver = rhs.gameOver;
}

void Game::setPlayerOne(Player<Board>* o){
    playerOne = o;
}
void Game::setPlayerTwo(Player<Board>* t){
    playerTwo = t;
}
void Game::setGameOver(bool g){
    gameOver = g;
}

Player<Board>* Game::getPlayerOne(){
    return playerOne;
}
Player<Board>* Game::getPlayerTwo(){
    return playerTwo;
}
bool Game::getGameOver(){
    return gameOver;
}

void Game::startGame(){
    
}
int Game::checkWin(){
    int playerOneShips, playerTwoShips;

    for(int i = 0; i < playerOne->getPlayerBoard()->getNumShips(); i++){
        if(!playerOne->getPlayerBoard()->getShips()[i].getSunk()){
            playerOneShips++;
        }
    }
    for(int i = 0; i < playerTwo->getPlayerBoard()->getNumShips(); i++){
        if(!playerTwo->getPlayerBoard()->getShips()[i].getSunk()){
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