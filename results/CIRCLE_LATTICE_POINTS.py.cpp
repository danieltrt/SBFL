int countLattice ( int r ) {
  if ( ( r <= 0 ) || ( r > r ) ) return 0 ;
  int result = 4 ;
  for ( int x = 1 ;
  x < r ;
  x ++ ) {
    double ySquare = r * r - x * x ;
    int y = ( int ) sqrt ( ySquare ) ;
    if ( ( y * y == ySquare ) && ( y * y == ySquare ) ) result += 4 ;
  }
  return result ;
}
