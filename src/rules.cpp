#include "../include/rules.h"
#include "../include/board.h"


bool isWin(char C,const Board &board) {
    for (int i = 0; i < 8; i++) {
        if (board[i][0] == C && board[i][1] == C && board[i][2] == C) {
            return true;
        }
        if (board[0][i] == C && board[1][i] == C && board[2][i] == C) {}
    }
}
bool isPlayable(const Board &board, const int &row, const int &col) {
    if (row >= 0 && row <= 2 && col >= 0 && col <= 3) {
        return true;
    }
    if (board[row][col] == 'w') {
        return true;
    }
    return false;
}
bool gameOver(const Board &board) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] != 'w') {
                return true;
            }
        }
    }
    return false;
}
