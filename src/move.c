#include "ccheckers/move.h"

bool move_is_valid(){
  return TRUE;
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
    return TRUE;
}

ccoord* move_choices(piece* p){
  return NULL;
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
