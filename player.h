#ifndef PLAYER_H
#define PLAYER_H
#include "board.h"

#include <iostream> 
using namespace std;

template<class T1>
class Player{
    private: 
        string name;
        Board playerBoard, opponentBoard;
    public:
        Player(){
            name = "";
        }
        Player(string n, Board pl, Board opp){
            name = n;
            playerBoard = pl;
            opponentBoard = opp;
        }
        Player<T>(const Player& rhs){
            name = rhs.name;
            playerBoard = rhs.playerBoard;
            opponentBoard = rhs.opponentBoard;
        }

        void setName(string nm){
            name = nm;
        }
        void setPlayerBoard(Board pl){
            playerBoard = pl;
        }
        void setOpponentBoard(Board opp){
            opponentBoard = opp;
        }

        string getName(){
            return name;
        }
        Board getPlayerBoard(){
            return playerBoard;
        }
        Board getOpponentBoard(){
            return opponentBoard;
        }

        void makeMove(Player* opponent){
            int x, x2, y, y2;
            //Display the opponent's board to the player (optional).
            opponent.displayBoard();
            // 2. Prompt the player to input coordinates for their move.
            cout << "Input coordinates (x,y) for your move: " << endl;
            getline(cin, x);
            getline(cin, y);
            Coordinate start(x,y);
            cout << "Input end coordinates (x,y) for your move" << endl;
            getline(cin, x2);
            getline(cin, y2);
            Coordinate end(x2, y2);
            // 3. Validate the input coordinates to ensure they are within the bounds of the board and haven't been previously targeted.
            if(oppnent.checkValidPlacement(start, end)){
                opponent.receiveAttack()

            }
            // 4. If the coordinates are valid:
            //    4.1. Perform the attack on the opponent's board.
            //    4.2. Determine the outcome of the attack (hit, miss, or sunk).
            //    4.3. Update the opponent's board accordingly.
            //    4.4. Display the outcome of the attack to the player (e.g., "You hit a ship!" or "You missed!").
            // 5. If the coordinates are invalid:
            //    5.1. Display an error message to the player.
            //    5.2. Prompt the player to input new coordinates.
            // 6. Repeat steps 2-5 until a valid move is made.
            // 7. Optionally, update the player's own board with the outcome of their move (e.g., mark the target as hit or miss).
            // 8. End the makeMove method.
       }
        void displayPlayerBoard() const{

        }
        void displayOppBoard() const{

        }

};
#endif