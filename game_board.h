#ifndef BATTLESHIP_GAME_BOARD_H
#define BATTLESHIP_GAME_BOARD_H

#include "game_piece.h"

struct game_board {
    struct game_piece **board;
    int rows;
    int cols;
};

void game_board_init(struct game_board *board, int rows, int cols);
void game_board_print(struct game_board *board);

#endif //BATTLESHIP_GAME_BOARD_H