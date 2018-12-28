#include "cchess/piece.h"

piece* piece_init(int c, char n, char f, int r){
    piece* p = (piece*) malloc(sizeof(piece)); 
    piece_set_color(p, c);
    piece_set_name(p, n);
    piece_set_file(p, f);
    piece_set_rank(p, r);
    
    return p;
}

void piece_destroy(piece *p){
    free(p);
}

void piece_set(piece *p, int c, char n, char f, int r){
    piece_set_color(p, c);
    piece_set_name(p, n);
    piece_set_file(p, f);
    piece_set_rank(p, r);
}

void piece_set_color(piece *p, int c){
    p->color = c;
}

void piece_set_name(piece *p, char n){
    p->name = n;
}

void piece_set_file(piece *p, char f){
    p->file = f;
}
void piece_set_rank(piece *p, int r){
    p->rank = r;
}


void piece_print(piece *p){
    printf("%i%c %c%i\n", p->color, p->name, p->file, p->rank);   
}
