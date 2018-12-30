#include "cchess/ccoord.h"

ccoord* ccoord_init(unsigned char f, int r){
    ccoord *cc = (ccoord*) malloc(sizeof(ccoord));
    ccoord_set_file(cc,f);
    ccoord_set_rank(cc,r);

    return cc;
}

void ccoord_destroy(ccoord *cc){
    free(cc);
}

void ccoord_set(ccoord *cc, unsigned char f, int r){
    ccoord_set_file(cc,f);
    ccoord_set_rank(cc,r);
}

void ccoord_set_file(ccoord *cc, unsigned char f){
    cc->file = f;
}

void ccoord_set_rank(ccoord *cc, int r){
    cc->rank = r;
}

bool ccoord_is_equal(ccoord *cca, ccoord *ccb){
    if((cca->file == ccb->file) && (cca->rank == ccb->rank)){
        return TRUE;
    } else {
        return FALSE;
    }
}
