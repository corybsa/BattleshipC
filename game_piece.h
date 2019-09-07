#ifndef BATTLESHIP_GAME_PIECE_H
#define BATTLESHIP_GAME_PIECE_H

struct game_piece {
    char *label;
};

void game_piece_init_default(struct game_piece *piece);

#endif //BATTLESHIP_GAME_PIECE_H
