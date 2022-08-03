static int totalNodes ( Vector < Integer > adjac [ ], int n, int x, int y ) {
  Boolean visited [ ] = new Boolean [ n + 1 ];
  Arrays . fill ( visited, false );
  int p [ ] = new int [ n ];
  Queue < Integer > q = new LinkedList < > ( );
  q . add ( x );
  visited [ x ] = true;
  int m;
  while ( ! q . isEmpty ( ) ) {
    m = q . peek ( );
    q . poll ( );
    for ( int i = 0;
    i < adjac [ m ] . size ( );
    ++ i ) {
      int h = adjac [ m ] . get ( i );
      if ( visited [ h ] != true ) {
        visited [ h ] = true;
        p [ h ] = m;
        q . add ( h );
      }
    }
  }
  int count = 0;
  int i = p [ y ];
  while ( i != x ) {
    count ++;
    i = p [ i ];
  }
  return count;
}