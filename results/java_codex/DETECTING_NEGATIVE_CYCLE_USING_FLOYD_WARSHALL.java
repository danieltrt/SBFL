bool negCyclefloydWarshall ( int graph [ ] [ ] ) {
  int dist [ ] [ ] = new int [ V ] [ V ], i, j, k;
  for ( i = 0;
  i < V;
  i ++ ) for ( j = 0;
  j < V;
  j ++ ) dist [ i ] [ j ] = graph [ i ] [ j ];
  for ( k = 0;
  k < V;
  k ++ ) {
    for ( i = 0;
    i < V;
    i ++ ) {
      for ( j = 0;
      j < V;
      j ++ ) {
        if ( dist [ i ] [ k ] + dist [ k ] [ j ] < dist [ i ] [ j ] ) dist [ i ] [ j ] = dist [ i ] [ k ] + dist [ k ] [ j ];
      }
    }
  }
  for ( i = 0;
  i < V;
  i ++ ) if ( dist [ i ] [ i ] < 0 ) return true;
  return false;
}