#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>
using namespace std;

class Board{
private:
    vector<vector<char>> board;
public:
    Board();
    Board(vector<vector<char>> board_) : board(board_){}
    vector<vector<char>> getBoard();
    void setBoard(const vector<vector<char>> &board);
    bool checkWin() const;

    //Test
    bool placeSymbol(int row, int col, char symbol);
    char getCell(int row, int col);
    bool isCellEmpty(int row, int col);
    bool isBoardFull();
    void resetBoard();

    //Fonction board
    ~Board() = default;
    friend ostream& printBoard(ostream& os, Board board);
};
#endif //BOARD_H

