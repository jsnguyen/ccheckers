#ifndef _MOVE_H
#define _MOVE_H

#include <stdio.h>
#include <stdlib.h>
#include "ccheckers/piece.h"
#include "ccheckers/ccoord.h"
#include "ccheckers/board.h"

bool move_is_valid();
bool move_is_inside(ccoord cco);
bool move_is_collision(board b, ccoord cco);

bool move_is_check();
bool move_is_checkmate();

ccoord* move_choices(piece* p);
void move_piece(board* b, piece* p, ccoord* choices ,int choice);

void delete_move(ccoord *moves, int size, int ind);

#endif
