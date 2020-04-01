#ifndef _PIECE_H
#define _PIECE_H

#include <stdio.h>
#include <stdlib.h>
#include "ccheckers/ccoord.h"

typedef struct{
    color_t color;
    bool is_king;
    ccoord cc;
} piece;

piece* piece_init(color_t col, bool king, int X, int Y);
void piece_destroy(piece* p);
void piece_set(piece *p, color_t col, bool king, int X, int Y);
void piece_set_cc(piece *p, ccoord cc);
void piece_set_color(piece *p, color_t colo);
void piece_set_is_king(piece *p, bool king);

void piece_set_equal(piece *a, piece b);
ccoord piece_get_cc(piece p);
void piece_print(piece p);

#endif
