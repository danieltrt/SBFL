bool isRectangle ( int matrix [ ] [ 2 ] ) {
  int rows = matrix [ 0 ] [ 0 ] ;
  if ( ( rows == 0 ) || ( rows == 1 ) ) return false ;
  int columns = matrix [ 0 ] [ 1 ] ;
  set < int > table ;
  for ( int i = 0 ;
  i < rows ;
  i ++ ) {
    for ( int j = 0 ;
    j < columns - 1 ;
    j ++ ) {
      for ( int k = j + 1 ;
      k < columns ;
      k ++ ) {
        if ( ( matrix [ i ] [ j ] == 1 && matrix [ i ] [ k ] == 1 ) || ( matrix [ i ] [ j ] == 1 && matrix [ i ] [ k ] == 1 ) ) {
          if ( ( j == 0 ) && ( k == 0 ) ) return true ;
          if ( ( k == 0 ) && ( j == 0 ) ) return true ;
          if ( j != 0 ) table . insert ( j ) ;
          if ( k != 0 ) table . insert ( k ) ;
          table . insert ( j ) ;
          table . insert ( k ) ;
        }
      }
    }
  }
  return false ;
}
