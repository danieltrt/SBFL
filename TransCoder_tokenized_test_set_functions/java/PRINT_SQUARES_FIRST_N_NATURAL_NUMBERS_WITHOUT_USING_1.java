static void printSquares ( int n ) {
  int square = 0, odd = 1;
  for ( int x = 0;
  x < n;
  x ++ ) {
    System . out . print ( square + " " );
    square = square + odd;
    odd = odd + 2;
  }
}