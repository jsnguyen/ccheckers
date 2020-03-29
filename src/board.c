#include "ccheckers/board.h"

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
    char file;

    for(int i=1;i<DIM_X;i+=2){
      b->spaces[i][0] = TRUE;
    }

    for(int i=0;i<DIM_X;i+=2){
      b->spaces[i][1] = TRUE;
    }

    for(int i=1;i<DIM_X;i+=2){
      b->spaces[i][2] = TRUE;
    }

    //piece_set(b->pieces[i], 0, TRUE, 'a', 1);

    for(int i=0;i<DIM_X;i+=2){
      b->spaces[i][DIM_Y-3] = TRUE;
    }

    for(int i=1;i<DIM_X;i+=2){
      b->spaces[i][DIM_Y-2] = TRUE;
    }

    for(int i=0;i<DIM_X;i+=2){
      b->spaces[i][DIM_Y-1] = TRUE;
    }
}

void board_destroy(board *b){
    free(b->pieces);
    free(b);
}

void board_total_update(board *b){
    for(int i=0;i<DIM_X;i++){
        for(int j=0;j<DIM_Y;j++){
            b->spaces[i][j] = FALSE;
        }
    }

    for(int i=0; i<b->n_pieces; i++){
        board_occupy(b,b->pieces[i].cc);
    }
}

void board_space_update(board *b, ccoord cc_old, ccoord cc_new){
    board_unoccupy(b,cc_old);
    board_occupy(b,cc_new);
}

void board_occupy(board *b, ccoord c){
    b->spaces[F2N(c.file)][R2N(c.rank)]=TRUE;
}

void board_unoccupy(board *b, ccoord c){
    b->spaces[F2N(c.file)][R2N(c.rank)]=FALSE;
}

void board_print(board *b){
    for(int j=0;j<DIM_Y;j++){
        for(int i=0;i<DIM_X;i++){
            printf("%i",b->spaces[i][j]);
        }
        printf("\n");
    }
}
