#include <stdio.h>
#include "cchess/piece.h"
#include "cchess/board.h"
#include "cchess/moves.h"

int main(int argc, char* argv[]){
    
    piece* p;

    p = piece_init('P',0,0);
    piece_print(p);

    piece_destroy(p);

    return 0;
}
