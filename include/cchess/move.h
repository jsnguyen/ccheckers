#ifndef _MOVE_H
#define _MOVE_H

#include <stdio.h>
#include <stdlib.h>
#include "cchess/piece.h"
#include "cchess/ccoord.h"
#include "cchess/board.h"

#define MAX_ROOK_MOVES 0
#define MAX_KNIGHT_MOVES 0
#define MAX_BISHOP_MOVES 0
#define MAX_KING_MOVES 0
#define MAX_QUEEN_MOVES 0
#define MAX_PAWN_MOVES 4

bool move_is_valid();
bool move_is_inside(ccoord cco);
bool move_is_collision(ccoord cco);

bool move_is_check();
bool move_is_checkmate();

ccoord* move_choices(piece* p);
void move_piece(board* b, piece* p, ccoord* choices ,int choice);

void delete_move(ccoord *moves, int size, int ind);

ccoord* move_pawn_choices(piece *p);

#endif
