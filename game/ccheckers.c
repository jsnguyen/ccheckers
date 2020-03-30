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
    
    return 0;
}
