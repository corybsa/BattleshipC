#include <stdlib.h>
#include <string.h>
#include "game_piece.h"

char *default_label = "--";

void game_piece_init_default(struct game_piece *piece) {
    unsigned long length = strlen(default_label);
    piece->label = malloc(length * sizeof(char));
    strncpy(piece->label, default_label, length);
}