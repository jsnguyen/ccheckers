#ifndef _MOVE_H
#define _MOVE_H

#include <stdio.h>
#include <stdlib.h>
#include "ccheckers/piece.h"
#include "ccheckers/ccoord.h"
#include "ccheckers/board.h"

#define MAX_N_POSSIBLE_MOVES 4

bool move_is_valid(board b, ccoord cco);
bool move_is_inside(ccoord cco);
bool move_is_collision(board b, ccoord cco);

void move_choices(board b, piece p, ccoord *moves, int *n_possible_moves);
void move_piece(piece* p, ccoord cc);

#endif
