#ifndef _BOARD_H
#define _BOARD_H

#include <stdio.h>
#include <stdlib.h>
#include "ccheckers/piece.h"
#include "ccheckers/ccoord.h"

#define DIM_X 8
#define DIM_Y 8

#define N_PIECES_PER_SIDE 12


typedef struct{
    int n_pieces;
    piece white_pieces[N_PIECES_PER_SIDE];
    piece black_pieces[N_PIECES_PER_SIDE];
} board;

board* board_init();
void board_place_pieces(board *b);
void board_destroy(board *b);

void board_print_pieces(board b);
void board_print(board b);

#endif
