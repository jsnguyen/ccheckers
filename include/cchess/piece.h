#ifndef _PIECE_H
#define _PIECE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name;
    int color;
    int rank;
    char file;
} piece;

piece* piece_init(char n, int c, int f, int r);
void piece_destroy(piece* p);
void piece_set_name(piece *p, char n);
void piece_set_color(piece *p, int c);
void piece_set_file(piece *p, int f);
void piece_set_rank(piece *p, int r);
void piece_print(piece *p);

#endif
