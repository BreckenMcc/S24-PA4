#ifndef AI_H
#define AI_H

#include "player.h"
#include "board.h"

class AI : public Player<Board> {
    private:
    Coordinate chooseMove();
    int randomNum(int, int);

    public:
    void makeMove(Player<Board>* opponent) override;

    AI();
    AI(string, Board*, Board*);
    AI(const AI& rhs);

    string getName();
    Board* getPlayerBoard();
    Board* getOpponentBoard();
    
    void setName(string);
    void setPlayerBoard(Board*);
    void setOpponentBoard(Board*);

}; 
#endif