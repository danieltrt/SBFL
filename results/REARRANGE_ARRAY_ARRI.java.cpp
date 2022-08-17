int fix ( int * A ) {
  for ( int i = 0 ;
  i < sizeof ( A ) / sizeof ( int ) ;
  i ++ ) {
    if ( A [ i ] != - 1 && A [ i ] != i ) {
      int x = A [ i ] ;
      while ( A [ x ] != - 1 && A [ x ] != x ) {
        int y = A [ x ] ;
        A [ x ] = x ;
        x = y ;
      }
      A [ x ] = x ;
      if ( A [ i ] != i ) A [ i ] = - 1 ;
    }
  }
  return A [ i ] ;
}
