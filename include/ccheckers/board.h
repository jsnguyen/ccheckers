#ifndef _BOARD_H
#define _BOARD_H

#include <stdio.h>
#include <stdlib.h>
#include "ccheckers/piece.h"

#define DIM_X 8 /* file */
#define DIM_Y 8 /* rank */

#define FILE_MIN 'a'
#define FILE_MAX 'h'
#define RANK_MIN  1
#define RANK_MAX  8

#define R2N(r) (r-1) /* rank to number */
#define F2N(f) (f-'a') /* file to number */

#define N_PIECES 32


typedef struct{
    piece *pieces;
    int n_pieces;
    bool spaces[DIM_X][DIM_Y];
} board;

board* board_init();
void board_place_pieces(board *b);
void board_destroy(board *b);
void board_total_update(board *b);
void board_space_update(board *b, ccoord cc_old, ccoord cc_new);
void board_occupy(board *b, ccoord c);
void board_unoccupy(board *b, ccoord c);
void board_print(board *b);

#endif
