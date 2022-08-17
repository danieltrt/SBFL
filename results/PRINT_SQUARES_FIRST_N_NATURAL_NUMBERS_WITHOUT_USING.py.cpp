void printSquares ( int n ) {
  int square = 0 ;
  int prevX = 0 ;
  for ( int x = 0 ;
  x <= n ;
  x ++ ) {
    square = ( square + x + prevX ) ;
    cout << square << " " ;
    prevX = x ;
  }
}
