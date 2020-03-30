#include "ccheckers/move.h"

bool move_is_valid(ccoord cco){
  return TRUE;
}

bool move_is_inside(ccoord cco){
  if(cco.x < DIM_X && cco.y < DIM_Y){
    return TRUE;
  } else {
    return FALSE;
  }
}

bool move_is_collision(board b, ccoord cco){
  return TRUE;
}

ccoord* move_choices(piece* p){
  return NULL;
}

void move_piece(board* b, piece* p, ccoord* choices ,int choice){
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
