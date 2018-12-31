#include "cchess/move.h"

bool move_is_valid(){
    
}

bool move_is_inside(ccoord cco){
    if(cco.file < FILE_MIN){
        return FALSE;
    }
    else if(cco.file > FILE_MAX){
        return FALSE;
    }
    else if(cco.rank < RANK_MIN){
        return FALSE;
    }
    else if(cco.rank > RANK_MAX){
        return FALSE;
    }
    else {
        return TRUE;
    }
}

bool move_is_collision(board b, ccoord cco){
    return b.spaces[F2N(cco->file)][R2N(cco->rank)];
}

bool move_check();
ccoord* move_choices(piece* p){
    ccoord* choices;

    switch(p->name){
        case 'R':
            break;

        case 'N':
            break;

        case 'B':
            break;

        case 'K':
            break;

        case 'Q':
            break;

        case 'P':
            break;

        default:
            printf("Invalid name, cannot show moves!\n");
    }

    return choices;
}

void move_piece(board* b, piece* p, ccoord* choices ,int choice){
    board_unoccupy(b,p->cc); 
    p->cc=choices[choice];
    board_occupy(b,p->cc); 
}
