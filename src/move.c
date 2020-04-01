#include "ccheckers/move.h"

bool move_is_valid(board b, ccoord cco){

  if(move_is_inside(cco)==TRUE && move_is_collision(b,cco)==FALSE){
    return TRUE;
  } else {
    return FALSE;
  }

}

bool move_is_inside(ccoord cco){

  if(cco.x < DIM_X && cco.x >= 0 && 
     cco.y < DIM_Y && cco.y >= 0 ){
    return TRUE;
  } else {
    return FALSE;
  }

}

bool move_is_collision(board b, ccoord cco){

  for(int i=0; i<N_PIECES_PER_SIDE; i++){

    if (b.white_pieces[i].cc.x == cco.x &&
        b.white_pieces[i].cc.y == cco.y){
        return TRUE;
    }

    if (b.black_pieces[i].cc.x == cco.x &&
        b.black_pieces[i].cc.y == cco.y){
        return TRUE;
    }
  }

  return FALSE;
}

void move_choices(board b, piece p, ccoord *moves, int *n_possible_moves){

  ccoord cco[MAX_N_POSSIBLE_MOVES];

  ccoord_set(&cco[0],p.cc.x+1,p.cc.y+1);
  ccoord_set(&cco[1],p.cc.x-1,p.cc.y+1);
  ccoord_set(&cco[2],p.cc.x+1,p.cc.y-1);
  ccoord_set(&cco[3],p.cc.x-1,p.cc.y-1);


  for(int i=0; i<MAX_N_POSSIBLE_MOVES; i++){
    if(move_is_valid(b, cco[i])){
      ccoord_set_equal(&moves[*n_possible_moves],cco[i]);

      (*n_possible_moves)++;
    }
  }

}

void move_piece(piece* p, ccoord cc){
  piece_set_cc(p,cc);
}
