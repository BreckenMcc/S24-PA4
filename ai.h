#ifndef AI_H
#define AI_H

class AI : public Player<Board> {
    private:
    Coordinate chooseMove();
    int randomNum(int min, int max);

    public:
    void makeMove(Player<Board>* opponent);

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