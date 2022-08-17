int shortestPath ( int * * graph , int u , int v , int k ) {
  static int V = 4 ;
  int INF = 0 ;
  int * * sp = new int * [ V ] ;
  for ( int i = 0 ;
  i < V ;
  i ++ ) {
    for ( int j = 0 ;
    j < V ;
    j ++ ) {
      sp [ i ] [ j ] = new int [ k + 1 ] ;
    }
  }
  for ( int e = 0 ;
  e < k + 1 ;
  e ++ ) {
    for ( int i = 0 ;
    i < V ;
    i ++ ) {
      for ( int j = 0 ;
      j < V ;
      j ++ ) {
        sp [ i ] [ j ] [ e ] = INF ;
        if ( ( e == 0 && i == j ) || ( e == 1 && graph [ i ] [ j ] != INF ) ) sp [ i ] [ j ] [ e ] = graph [ i ] [ j ] ;
        if ( ( e > 1 ) ) {
          for ( int a = 0 ;
          a < V ;
          a ++ ) {
            if ( ( graph [ i ] [ a ] != INF && i != a && j != a && sp [ a ] [ j ] [ e - 1 ] != INF ) sp [ i ] [ j ] [ e ] = min ( sp [ i ] [ j ] [ e ] , graph [ i ] [ a ] + sp [ a ] [ j ] [ e - 1 ] ) ;
          }
        }
      }
    }
  }
  return sp [ u ] [ v ] [ k ] ;
}
