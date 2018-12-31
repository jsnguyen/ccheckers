#include "cchess/piece.h"

piece* piece_init(int c, char n, unsigned char f, int r){
    piece* p = (piece*) malloc(sizeof(piece)); 
    piece_set_color(p, c);
    piece_set_name(p, n);
    ccoord_set_individual(&p->cc,f,r); 
    return p;
}

void piece_destroy(piece *p){
    free(p);
}

void piece_set(piece *p, int c, char n, unsigned char f, int r){
    piece_set_color(p, c);
    piece_set_name(p, n);
    ccoord_set_individual(&p->cc,f,r); 
}

void piece_set_color(piece *p, int c){
    p->color = c;
}

void piece_set_name(piece *p, char n){
    p->name = n;
}

void piece_print(piece *p){
    printf("%i%c %c%i\n", p->color, p->name, p->cc.file, p->cc.rank);   
}
