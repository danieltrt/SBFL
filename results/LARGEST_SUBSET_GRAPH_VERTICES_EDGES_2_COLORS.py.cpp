int subsetGraph ( int * * C ) {
  static int N = 100 ;
  set < int > vertices ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) vertices . insert ( i ) ;
  while ( ( vertices . size ( ) != 0 ) && ( vertices . size ( ) == 1 ) ) {
    if ( ( vertices . size ( ) == 1 ) || ( vertices . size ( ) == 2 ) ) return 1 ;
    bool someoneRemoved = false ;
    for ( int x = 0 ;
    x < vertices . size ( ) ;
    x ++ ) {
      set < int > values ;
      for ( int y = 0 ;
      y < vertices . size ( ) ;
      y ++ ) {
        if ( ( vertices [ y ] != x ) || ( vertices [ y ] == x ) ) values . insert ( C [ x ] [ y ] ) ;
      }
      if ( ( values . size ( ) == 1 ) || ( values . size ( ) == 2 ) ) {
        vertices . erase ( x ) ;
        someoneRemoved = true ;
        break ;
      }
    }
    if ( ( ! someoneRemoved ) || ( ! vertices . size ( ) == 2 ) ) break ;
  }
  return vertices . size ( ) ;
}
