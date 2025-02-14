#include "../include/player.h"


char playerSwitch(char &C) {
    if (C == 'X') {
        return 'O';
    }
    else if (C == 'O') {
        return 'X';
    }
    else {
        return C;
    }
}
