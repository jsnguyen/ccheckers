#include "cchess/board.h"

board* board_init(){
    board *b = (board*) malloc(sizeof(board));
    piece *ps = (piece*) malloc(N_PIECES*sizeof(piece));
    b->pieces = ps;
    return b;
}

void board_destroy(board *b){
    free(b->pieces);
    free(b);
}
