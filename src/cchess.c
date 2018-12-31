#include <stdio.h>
#include "cchess/piece.h"
#include "cchess/ccoord.h"
#include "cchess/board.h"
#include "cchess/move.h"

int main(int argc, char* argv[]){
    
    piece* p;

    p = piece_init(1,'P','a',1);
    piece_print(p);
    printf("is inside return: %i\n",move_is_inside(p->cc));

    piece_destroy(p);

    board *b;

    b = board_init();
    board_place_pieces(b);
    board_print(b);
    board_total_update(b);
    board_print(b);
    board_destroy(b);
    
    return 0;
}
