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

void delete_move(ccoord *moves, int size, int ind){
    ccoord* temp_moves = (ccoord*) malloc((size-1)*sizeof(ccoord));
    for(int i=0;i<size;i++){
        if(i!=ind){
            temp_moves[i] = moves[i];
        }
    }
    free(moves);
    moves = temp_moves;
}

ccoord* move_pawn_choices(piece *p){
    ccoord *moves = (ccoord*) malloc(MAX_PAWN_MOVES*sizeof(ccoord));

    set_file_rank( moves[0] , p->cc.file    , p->cc.rank+=1 );
    set_file_rank( moves[1] , p->cc.file    , p->cc.rank+=2 );
    set_file_rank( moves[2] , p->cc.file-=1 , p->cc.rank+=1 );
    set_file_rank( moves[3] , p->cc.file+=1 , p->cc.rank+=1 );
}
