static void diagonalsquare ( int mat [ ] [ ], int row, int column ) {
  System . out . print ( " Diagonal one : " );
  for ( int i = 0;
  i < row;
  i ++ ) {
    System . out . print ( mat [ i ] [ i ] * mat [ i ] [ i ] + " " );
  }
  System . out . println ( );
  System . out . print ( " Diagonal two : " );
  for ( int i = 0;
  i < row;
  i ++ ) {
    System . out . print ( mat [ i ] [ row - i - 1 ] * mat [ i ] [ row - i - 1 ] + " " );
  }
}