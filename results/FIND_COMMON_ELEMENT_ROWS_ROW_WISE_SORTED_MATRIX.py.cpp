int findCommon ( int * * mat ) {
  int * column = new int [ N - 1 ] ;
  int minRow = 0 ;
  while ( ( column [ minRow ] >= 0 ) && ( column [ minRow ] < M ) ) {
    for ( int i = 0 ;
    i < M ;
    i ++ ) {
      if ( ( mat [ i ] [ column [ i ] ] < mat [ minRow ] [ column [ minRow ] ] ) && ( column [ i ] > 0 ) ) {
        if ( ( column [ i ] == 0 ) ) return - 1 ;
        column [ i ] -- ;
      }
      else {
        ++ eqCount ;
      }
    }
    if ( ( eqCount == M ) || ( column [ minRow ] == 0 ) ) return mat [ minRow ] [ column [ minRow ] ] ;
  }
  return - 1 ;
}
