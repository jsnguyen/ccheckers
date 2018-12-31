#include "cchess/board.h"

board* board_init(){
    board *b = (board*) malloc(sizeof(board));
    piece *ps = (piece*) malloc(N_PIECES*sizeof(piece));
    b->pieces = ps;

    for(int i=0;i<DIM_X;i++){
        for(int j=0;j<DIM_Y;j++){
            b->spaces[i][j] = FALSE;
        }
    }

    return b;
}

void board_place_pieces(board *b){
    int i=0;
    int color;
    unsigned char file;
    
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

void board_occupy(board *b, ccoord c){
    b->spaces[F2N(c->file),R2N(c->rank)]=TRUE;
}

void board_print(board *b){
    for(int i=0; i<N_PIECES; i++){
        piece_print(&b->pieces[i]);
    }
    for(int j=0;j<DIM_Y;j++){
        for(int i=0;i<DIM_X;i++){
            printf("%i",b->spaces[i][j]);
        }
        printf("\n");
    }
}
