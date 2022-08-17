int countTriangle ( int g [ ] [ 3 ] , bool isDirected ) {
  int nodes = sizeof ( g ) / sizeof ( g [ 0 ] [ 0 ] ) ;
  int count_Triangle = 0 ;
  for ( int i = 0 ;
  i < nodes ;
  i ++ ) {
    for ( int j = 0 ;
    j < nodes ;
    j ++ ) {
      for ( int k = 0 ;
      k < nodes ;
      k ++ ) {
        if ( ( i != j && i != k && j != k && g [ i ] [ j ] && g [ j ] [ k ] && g [ k ] [ i ] ) ) count_Triangle ++ ;
      }
    }
  }
  return isDirected ? count_Triangle / 3 : count_Triangle / 6 ;
}
