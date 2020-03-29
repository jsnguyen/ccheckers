#include <stdio.h>
#include "ccheckers/piece.h"
#include "ccheckers/ccoord.h"
#include "ccheckers/board.h"
#include "ccheckers/move.h"

int main(int argc, char* argv[]){
    
    piece* p;

    p = piece_init(1,TRUE,'a',1);
    piece_print(p);
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
