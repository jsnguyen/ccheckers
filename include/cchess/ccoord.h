#ifndef _CCOORD_H
#define _CCOORD_H

#include <stdio.h>
#include <stdlib.h>

typedef enum {FALSE,TRUE} bool;

typedef struct{
    unsigned char file;
    int rank;
} ccoord;

ccoord* ccoord_init(unsigned char f, int r);
void ccoord_destroy(ccoord *cc);
void ccoord_set(ccoord *cc, unsigned char f, int r);
void ccoord_set_file(ccoord *cc, unsigned char f);
void ccoord_set_rank(ccoord *cc, int r);
bool ccoord_is_equal(ccoord *cca, ccoord *ccb);

#endif
