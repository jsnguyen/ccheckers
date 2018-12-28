#include "cchess/piece.h"

piece* piece_init(char n, int c, int f, int r){
    piece* p = (piece*) malloc(sizeof(piece)); 
    piece_set_name(p, n);
    piece_set_color(p, c);
    piece_set_file(p, f);
    piece_set_rank(p, r);
    
    return p;
}

void piece_destroy(piece *p){
    free(p);
}

void piece_set_name(piece *p, char n){
    p->name = n;
}

void piece_set_color(piece *p, int c){
    p->color = c;
}

void piece_set_file(piece *p, int f){
    p->file = f;
}

void piece_set_rank(piece *p, int r){
    p->rank = r;
}

void piece_print(piece *p){
    printf("%c%i %i%i\n", p->name, p->color, p->file, p->rank);   
}
