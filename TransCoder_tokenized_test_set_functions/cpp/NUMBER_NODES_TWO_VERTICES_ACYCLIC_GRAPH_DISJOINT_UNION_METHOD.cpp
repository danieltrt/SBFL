int totalNodes ( vector < int > adjac [ ], int n, int x, int y ) {
  bool visited [ n + 1 ] = {
    0 };
    int p [ n ];
    queue < int > q;
    q . push ( x );
    visited [ x ] = true;
    int m;
    while ( ! q . empty ( ) ) {
      m = q . front ( );
      q . pop ( );
      for ( int i = 0;
      i < adjac [ m ] . size ( );
      ++ i ) {
        int h = adjac [ m ] [ i ];
        if ( ! visited [ h ] ) {
          visited [ h ] = true;
          p [ h ] = m;
          q . push ( h );
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