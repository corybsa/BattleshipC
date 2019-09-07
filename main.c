#include "game_board.h"

int main() {
    struct game_board board;
    game_board_init(&board, 10, 10);

    game_board_print(&board);
    return 0;
}