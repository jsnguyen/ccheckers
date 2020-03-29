#include "ccheckers/piece.h"

piece* piece_init(int c, bool ik, unsigned char f, int r){
    piece* p = (piece*) malloc(sizeof(piece)); 
    piece_set_color(p, c);
    ccoord_set_individual(&p->cc,f,r); 
    return p;
}

void piece_destroy(piece *p){
    free(p);
}

void piece_set(piece *p, int c, bool ik, unsigned char f, int r){
    piece_set_color(p, c);
    ccoord_set_individual(&p->cc,f,r); 
}

void piece_set_color(piece *p, int c){
    p->color = c;
}

void piece_print(piece *p){
    printf("%i%i %c%i\n", p->color, p->is_king, p->cc.file, p->cc.rank);   
}
