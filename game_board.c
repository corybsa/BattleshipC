#include <stdlib.h>
#include <stdio.h>
#include "game_board.h"
#include "game_piece.h"

void game_board_init(struct game_board *board, int rows, int cols) {
    board->rows = rows;
    board->cols = cols;

    board->board = (struct game_piece **)malloc(rows * sizeof(struct game_piece));

    for(int i = 0; i < rows; i++) {
        board->board[i] = (struct game_piece *)malloc(cols * sizeof(struct game_piece));
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            struct game_piece piece;
            game_piece_init_default(&piece);
            board->board[i][j] = piece;
        }
    }
}

void game_board_print(struct game_board *board) {
    printf("Game Board\n------------------------\n");

    for(int i = 0; i < board->rows; i++) {
        for(int j = 0; j < board->cols; j++) {
            printf("%s ", board->board[i][j].label);
        }

        printf("\n");
    }
}