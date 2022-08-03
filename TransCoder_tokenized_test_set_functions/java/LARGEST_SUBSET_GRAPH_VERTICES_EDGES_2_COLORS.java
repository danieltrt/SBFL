static int subsetGraph ( int C [ ] [ ] ) {
  HashSet < Integer > vertices = new HashSet < > ( );
  for ( int i = 0;
  i < N;
  ++ i ) {
    vertices . add ( i );
  }
  while ( ! vertices . isEmpty ( ) ) {
    if ( vertices . size ( ) == 1 ) {
      return 1;
    }
    boolean someone_removed = false;
    for ( int x : vertices ) {
      HashSet < Integer > values = new HashSet < > ( );
      for ( int y : vertices ) {
        if ( y != x ) {
          values . add ( C [ x ] [ y ] );
        }
      }
      if ( values . size ( ) == 1 ) {
        vertices . remove ( x );
        someone_removed = true;
        break;
      }
    }
    if ( ! someone_removed ) {
      break;
    }
  }
  return ( vertices . size ( ) );
}