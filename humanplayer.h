#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "player.h"
#include "board.h"

class HumanPlayer : public Player<Board> {
    public:
    void makeMove(Player<Board>* opponent) override;

    HumanPlayer();
    HumanPlayer(string, Board*, Board*);
    HumanPlayer(const HumanPlayer& rhs);

    string getName();
    Board* getPlayerBoard();
    Board* getOpponentBoard();
    
    void setName(string);
    void setPlayerBoard(Board*);
    void setOpponentBoard(Board*);

}; 
#endif