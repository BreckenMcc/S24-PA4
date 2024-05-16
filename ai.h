#ifndef AI_H
#define AI_H

class AI : public player<Board> {
    private:
    Coordinate
    int randomNum;

    public:

    AI();
    AI(string, Board, Board);
    AI(const AI& rhs);

    string getName();
    Board getPlayerBoard();
    Board getOpponentBoard();
    
    void setName(string);
    void setPlayerBoard(Board);
    void setOpponentBoard(Board);

}; 
#endif