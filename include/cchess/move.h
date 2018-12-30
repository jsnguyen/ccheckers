#ifndef _MOVE_H
#define _MOVE_H

#include <stdio.h>
#include <stdlib.h>
#include "cchess/piece.h"
#include "cchess/ccoord.h"

bool move_is_valid();
bool move_check();
ccoord* move_possibles(piece* p);
void move_piece(piece* p, int choice);

#endif
