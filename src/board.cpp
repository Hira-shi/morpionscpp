#include "../include/board.h"

Board::Board(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j] = ' ';
        }
    }
}

vector<vector<char>> Board::getBoard(){
    return board;
}

void Board::setBoard(vector<vector<char>> board) {
    this->board = board;
}


// TEST
bool Board::placeSymbol(int row, int col, char symbol) {
    if (board[row][col] == ' ') {
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
    if (board[row][col] == ' ') {
        return true;
    } else {
        return false;
    }
}

bool Board::isBoardFull() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if (board[i][j] == ' ') {
                return true;
            }
        }
    }
    return false;
}

void Board::resetBoard() {
    *this = Board();
}