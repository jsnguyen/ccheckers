#ifndef _PIECE_H
#define _PIECE_H

#include <stdio.h>
#include <stdlib.h>
#include "cchess/ccoord.h"

typedef struct{
    int color;
    char name;
    ccoord cc;
} piece;

piece* piece_init(int c, char n, unsigned char f, int r);
void piece_destroy(piece* p);
void piece_set(piece *p, int c, char n, unsigned char f, int r);
void piece_set_color(piece *p, int c);
void piece_set_name(piece *p, char n);
void piece_print(piece *p);

#endif
