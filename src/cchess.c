#include <stdio.h>
#include "cchess/piece.h"
#include "cchess/ccoord.h"
#include "cchess/board.h"
#include "cchess/move.h"

int main(int argc, char* argv[]){
    
    piece* p;

    p = piece_init(1,'P','a',1);
    piece_print(p);

    piece_destroy(p);

    board *b;

    b = board_init();
    board_place_pieces(b);
    board_print(b);
    board_destroy(b);
    
    printf("R2N %i\n", R2N(1));
    printf("R2N %i\n", R2N(2));
    printf("R2N %i\n", R2N(3));
    printf("R2N %i\n", R2N(4));
    printf("R2N %i\n", R2N(5));
    printf("R2N %i\n", R2N(6));
    printf("R2N %i\n", R2N(7));
    printf("R2N %i\n", R2N(8));
    printf("F2N %i\n", F2N('a'));
    printf("F2N %i\n", F2N('b'));
    printf("F2N %i\n", F2N('c'));
    printf("F2N %i\n", F2N('d'));
    printf("F2N %i\n", F2N('e'));
    printf("F2N %i\n", F2N('f'));
    printf("F2N %i\n", F2N('g'));
    printf("F2N %i\n", F2N('h'));

    return 0;
}
