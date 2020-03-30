#include "ccheckers/ccoord.h"

ccoord* ccoord_init(int x, int y){
  ccoord *cc = (ccoord*) malloc(sizeof(ccoord));
  return cc;
}

void ccoord_destroy(ccoord *cc){
  free(cc);
}

void ccoord_set(ccoord *cc, int X, int Y){
  cc->x = X;
  cc->y = Y;
}

void ccoord_set_x(ccoord *cc, int X){
  cc->x = X;
}

void ccoord_set_y(ccoord *cc, int Y){
  cc->y = Y;
}

bool ccoord_is_equal(ccoord *cca, ccoord *ccb){
  if((cca->x == ccb->x) && (cca->y== ccb->y)){
    return TRUE;
  } else {
    return FALSE;
  }
}
