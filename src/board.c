#include "cchess/board.h"

board* board_init(){
    board *b = (board*) malloc(sizeof(board));
    piece *ps = (piece*) malloc(N_PIECES*sizeof(piece));
    b->pieces = ps;
    return b;
}

void board_place_pieces(board *b){
    int i=0;
    int color;
    char file;
    
    color=0;

    file='a';
    piece_set(&b->pieces[i++],color, 'R', file++,1);
    piece_set(&b->pieces[i++],color, 'N', file++,1);
    piece_set(&b->pieces[i++],color, 'B', file++,1);
    piece_set(&b->pieces[i++],color, 'K', file++,1);
    piece_set(&b->pieces[i++],color, 'Q', file++,1);
    piece_set(&b->pieces[i++],color, 'B', file++,1);
    piece_set(&b->pieces[i++],color, 'N', file++,1);
    piece_set(&b->pieces[i++],color, 'R', file++,1);

    file='a';
    for(int j=0; j<N_PIECES/4; j++){
        piece_set(&b->pieces[i++],color,'P',file++,2);
    }

    color=1;

    file='a';
    for(int j=0; j<N_PIECES/4; j++){
        piece_set(&b->pieces[i++],color,'P',file++,7);
    }
    
    file='a';
    piece_set(&b->pieces[i++],color, 'R', file++,8);
    piece_set(&b->pieces[i++],color, 'N', file++,8);
    piece_set(&b->pieces[i++],color, 'B', file++,8);
    piece_set(&b->pieces[i++],color, 'K', file++,8);
    piece_set(&b->pieces[i++],color, 'Q', file++,8);
    piece_set(&b->pieces[i++],color, 'B', file++,8);
    piece_set(&b->pieces[i++],color, 'N', file++,8);
    piece_set(&b->pieces[i++],color, 'R', file++,8);
}

void board_destroy(board *b){
    free(b->pieces);
    free(b);
}

void board_print(board *b){
    for(int i=0; i<N_PIECES; i++){
        piece_print(&b->pieces[i]);
    }
}
