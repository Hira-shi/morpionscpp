#include "../include/rules.h"

bool isWin(char C, const Board &board) {
    for (int i = 0; i < 3; i++) {  // Changé de 8 à 3
        if (board[i][0] == C && board[i][1] == C && board[i][2] == C) {
            return true;
        }
        if (board[0][i] == C && board[1][i] == C && board[2][i] == C) {
            return true;
        }
    }
    // Ajout des diagonales
    if (board[0][0] == C && board[1][1] == C && board[2][2] == C) return true;
    if (board[0][2] == C && board[1][1] == C && board[2][0] == C) return true;
    return false;
}

bool isPlayable(const Board &board, const int &row, const int &col) {
    if (row < 0 || row > 2 || col < 0 || col > 2) return false;  // Corrigé
    return board[row][col] == 'w';
}

bool gameOver(const Board &board) {
    // Vérifie si quelqu'un a gagné
    if (isWin('X', board) || isWin('O', board)) return true;

    // Vérifie s'il reste des cases vides
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 'w') return false;
        }
    }
    return true;  // Match nul
}