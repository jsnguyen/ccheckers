#ifndef _BOARD_H
#define _BOARD_H

#include <stdio.h>
#include "cchess/piece.h"

#define DIM_X 8
#define DIM_Y 8

#define N_PIECES 32

typedef struct{
    piece *pieces;
} board;

board* board_init();
void board_place_pieces(board *b);
void board_destroy(board *b);
void board_print(board *b);

#endif
