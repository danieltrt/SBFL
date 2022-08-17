int f_filled ( string str ) {
  int N = str . length ( ) ;
  int cps [ N + 2 ] [ N + 2 ] ;
  for ( int j = 0 ;
  j < N + 2 ;
  j ++ ) {
    for ( int i = 0 ;
    i < N ;
    i ++ ) {
      cps [ i ] [ i ] = 1 ;
    }
  }
  for ( int L = 2 ;
  L <= N ;
  L ++ ) {
    for ( int i = 0 ;
    i < N ;
    i ++ ) {
      int k = L + i - 1 ;
      if ( ( k < N ) && ( str [ i ] == str [ k ] ) ) {
        cps [ i ] [ k ] = ( cps [ i ] [ k - 1 ] + cps [ i + 1 ] [ k ] + 1 ) ;
      }
      else {
        cps [ i ] [ k ] = ( cps [ i ] [ k - 1 ] + cps [ i + 1 ] [ k ] - cps [ i + 1 ] [ k - 1 ] ) ;
      }
    }
  }
  return cps [ 0 ] [ N - 1 ] ;
}
