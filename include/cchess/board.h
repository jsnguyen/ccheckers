#ifndef _BOARD_H
#define _BOARD_H

#include <stdio.h>
#include <stdlib.h>
#include "cchess/piece.h"

#define DIM_X 8
#define DIM_Y 8

#define R2N(r) (r-1) /* rank to number */
#define F2N(f) (f-'a') /* file to number */

#define N_PIECES 32


typedef struct{
    piece *pieces;
    bool spaces[DIM_X][DIM_Y];
} board;

board* board_init();
void board_place_pieces(board *b);
void board_destroy(board *b);
void board_print(board *b);

#endif
