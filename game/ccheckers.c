#include <stdio.h>
#include "ccheckers/piece.h"
#include "ccheckers/ccoord.h"
#include "ccheckers/board.h"
#include "ccheckers/move.h"

int main(int argc, char* argv[]){
    
    board b;
    board_place_pieces(&b);

    //board_print_pieces(b);
    board_print(b);

    ccoord moves[MAX_N_POSSIBLE_MOVES];
    
    for(int i=0; i<MAX_N_POSSIBLE_MOVES; i++){
      ccoord_set(&moves[i],DIM_X,DIM_Y);
    }

    int n_possible_moves=0;
    //move_choices(b, b.white_pieces[11], moves, &n_possible_moves);
    move_choices(b, b.white_pieces[11], moves, &n_possible_moves);
 
    piece_print(b.black_pieces[11]);
    printf("n_possible_moves %d\n",n_possible_moves);

    for(int i=0; i<n_possible_moves; i++){
      ccoord_print(moves[i]);
    }

    // something is weird here with the board orientation!!!
    move_piece(&b.white_pieces[11], moves[0]);
    board_print(b);

    return 0;
}
