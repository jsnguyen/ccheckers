#ifndef _MOVE_H
#define _MOVE_H

#include <stdio.h>
#include <stdlib.h>
#include "cchess/piece.h"
#include "cchess/ccoord.h"
#include "cchess/board.h"

bool move_is_valid();
bool move_is_inside(ccoord cco);
bool move_is_collision(ccoord cco);

bool move_is_check();
bool move_is_checkmate();

ccoord* move_choices(piece* p);
void move_piece(board* b, piece* p, ccoord* choices ,int choice);

ccoord* move_pawn_choices(piece *p);

#endif
