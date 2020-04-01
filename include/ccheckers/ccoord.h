#ifndef _CCOORD_H
#define _CCOORD_H

#include <stdio.h>
#include <stdlib.h>

typedef enum {FALSE,TRUE} bool;
typedef enum {WHITE,BLACK} color_t;

typedef struct{
    int x,y;
} ccoord;

ccoord* ccoord_init(int x, int y);
void ccoord_destroy(ccoord *cc);

void ccoord_set(ccoord *cc, int X, int Y);
void ccoord_set_equal(ccoord *a, ccoord b);
void ccoord_set_x(ccoord *cc, int X);
void ccoord_set_y(ccoord *cc, int Y);

bool ccoord_is_equal(ccoord *cca, ccoord *ccb);

void ccoord_print(ccoord cc);

#endif
