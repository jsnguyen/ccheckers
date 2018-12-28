#ifndef _PIECE_H
#define _PIECE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int color;
    char name;
    char file;
    int rank;
} piece;

piece* piece_init(int c, char n, char f, int r);
void piece_destroy(piece* p);
void piece_set(piece *p, int c, char n, char f, int r);
void piece_set_color(piece *p, int c);
void piece_set_name(piece *p, char n);
void piece_set_file(piece *p, char f);
void piece_set_rank(piece *p, int r);
void piece_print(piece *p);

#endif
