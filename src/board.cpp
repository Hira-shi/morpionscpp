#include "../include/board.h"

Board::Board() {
    board.resize(3);
    for (int i = 0; i < board.size(); i++) {
        board[i].resize(3);
        for (int j = 0; j < board[i].size(); j++) {
            board[i][j] = (i*3)+(j+1);
        }
    }
}


vector<vector<char>> Board::getBoard(){
    return board;
}

void Board::setBoard(const vector<vector<char>> &board) {
    this->board = board;
}


// TEST
bool Board::placeSymbol(int row, int col, char symbol) {
    if (board[row][col] == (row*3)+(col+1)) {
        board[row][col] = symbol;
        return true;
    } else {
        return false;
    }
}

char Board::getCell(int row, int col) {
    return board[row][col];
}

bool Board::isCellEmpty(int row, int col) {
    if (board[row][col] == (row*3)+(col+1)) {
        return true;
    } else {
        return false;
    }
}

bool Board::isBoardFull() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void Board::resetBoard() {
    *this = Board();
}

ostream& operator<<(ostream& os, Board board) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            os << board.getCell(i, j);
            if (j != 3-1) {
                os << "|";
            }
        }
        os << "______" <<endl;
    }
    return os;
}