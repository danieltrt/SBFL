public static int shortestDist ( int [ ] [ ] graph ) {
  int [ ] dist = new int [ N ];
  dist [ N - 1 ] = 0;
  for ( int i = N - 2;
  i >= 0;
  i -- ) {
    dist [ i ] = INF;
    for ( int j = i;
    j < N;
    j ++ ) {
      if ( graph [ i ] [ j ] == INF ) {
        continue;
      }
      dist [ i ] = Math . min ( dist [ i ], graph [ i ] [ j ] + dist [ j ] );
    }
  }
  return dist [ 0 ];
}