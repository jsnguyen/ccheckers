#ifndef _PIECE_H
#define _PIECE_H

#include <stdio.h>
#include <stdlib.h>
#include "ccheckers/ccoord.h"

typedef struct{
    int color;
    bool is_king;
    ccoord cc;
} piece;

piece* piece_init(int c, bool ik, unsigned char f, int r);
void piece_destroy(piece* p);
void piece_set(piece *p, int c, bool ik, unsigned char f, int r);
void piece_set_color(piece *p, int c);
void piece_print(piece *p);

#endif
