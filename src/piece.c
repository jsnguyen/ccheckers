#include "ccheckers/piece.h"

piece* piece_init(color_t col, bool king, int X, int Y){
  piece* p = (piece*) malloc(sizeof(piece)); 
  piece_set_color(p, col);
  ccoord_set(&p->cc,X,Y); 
  return p;
}

void piece_destroy(piece *p){
  free(p);
}

void piece_set(piece *p, color_t col, bool king, int X, int Y){
  piece_set_color(p, col);
  piece_set_is_king(p, king);
  ccoord_set(&p->cc,X,Y); 
}

void piece_set_equal(piece *a, piece b){
  a->cc.x = b.cc.x;
  a->cc.y = b.cc.y;
}

void piece_set_cc(piece *p, ccoord cc){
  p->cc.x = cc.x;
  p->cc.y = cc.y;
}

void piece_set_color(piece *p, color_t colo){
    p->color = colo;
}

void piece_set_is_king(piece *p, bool king){
    p->is_king = king;
}

ccoord piece_get_cc(piece p){
  return p.cc;
}

void piece_print(piece p){
    printf("%i%i %i%i\n", p.color, p.is_king, p.cc.x, p.cc.y);   
}
