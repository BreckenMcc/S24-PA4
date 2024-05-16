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
void Game::setGameOver(bool){

}

Player* Game::getPlayerOne();
Player* Game::getPlayerTwo();
bool Game::getGameOver();

void Game::startGame();
void Game::checkWin();
void Game::endGame();