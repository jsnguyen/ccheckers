#include "ccheckers/board.h"

board* board_init(){
  board *b = malloc(sizeof(board));
  return b;
}

void board_destroy(board *b){
  free(b);
}

void board_place_pieces(board *b){

  int white_index=0;
  for(int i=0; i<DIM_X; i+=2){
    piece_set(&b->white_pieces[white_index++], WHITE, FALSE, i, 0);
  }
  for(int i=1; i<DIM_X; i+=2){
    piece_set(&b->white_pieces[white_index++], WHITE, FALSE, i, 1);
  }
  for(int i=0; i<DIM_X; i+=2){
    piece_set(&b->white_pieces[white_index++], WHITE, FALSE, i, 2);
  }

  int black_index=0;
  for(int i=1; i<DIM_X; i+=2){
    piece_set(&b->black_pieces[black_index++], BLACK, FALSE, i, DIM_Y-1);
  }
  for(int i=0; i<DIM_X; i+=2){
    piece_set(&b->black_pieces[black_index++], BLACK, FALSE, i, DIM_Y-2);
  }
  for(int i=1; i<DIM_X; i+=2){
    piece_set(&b->black_pieces[black_index++], BLACK, FALSE, i, DIM_Y-3);
  }

}

void board_print_pieces(board b){

  for(int i=0; i<N_PIECES_PER_SIDE; i++){
    piece_print(b.white_pieces[i]);
  }

  for(int i=0; i<N_PIECES_PER_SIDE; i++){
    piece_print(b.black_pieces[i]);
  }

}

void board_print(board b){

  bool board[DIM_X][DIM_Y];

  for(int i=0; i<DIM_X; i++){
    for(int j=0; j<DIM_Y; j++){
      board[i][j]=FALSE;
    }
  }

  for(int i=0; i<N_PIECES_PER_SIDE; i++){

    ccoord ccw = piece_get_cc(b.white_pieces[i]);
    board[ccw.x][ccw.y]=TRUE;

    ccoord ccb = piece_get_cc(b.black_pieces[i]);
    board[ccb.x][ccb.y]=TRUE;
  }

  printf("BLACK\n");
  int row_counter = DIM_Y-1;
  for(int i=0; i<DIM_X; i++){

    printf("%i| ",row_counter--); // prints the row number on the left side

    // printing backwards so 0 corresponds to the last row printed
    for(int j=DIM_Y-1; j>=0; j--){
      if(j!=DIM_Y-1){
        printf("  ");
      }
      printf("%i",board[j][i]);
    }

    // newline at the end of every line
    printf("\n");

    // extra newline to make aspect ratio ~square
    // don't print a newline on the last line to save space
    if(i!=DIM_X-1){
      printf("\n");
    }
    
  }
  printf("   _  _  _  _  _  _  _  _\n");
  printf("   0  1  2  3  4  5  6  7\n");
  printf("WHITE\n");

}
