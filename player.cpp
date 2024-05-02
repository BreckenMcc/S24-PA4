#include "player.h"

Player::Player();
Player::Player(string, bool, int, int);
Player::Player(const Player& rhs);

void Player::setName(string);
void Player::setPlayerBoard(Board);
void Player::setOpponentBoard(Board);
void Player::setWins(int);

string Player::getName();
Board Player::getPlayerBoard();
Board Player::getOpponentBoard();
int Player::getWins();

void Player::placeShips();
void Player::move(Player*);
void Player::displayPlayerBoard() const;
void Player::displayOppBoard() const;