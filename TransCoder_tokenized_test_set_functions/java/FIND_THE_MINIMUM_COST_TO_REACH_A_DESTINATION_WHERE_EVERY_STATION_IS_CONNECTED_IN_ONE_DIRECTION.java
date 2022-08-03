static int minCost ( int cost [ ] [ ] ) {
  int dist [ ] = new int [ N ];
  for ( int i = 0;
  i < N;
  i ++ ) dist [ i ] = INF;
  dist [ 0 ] = 0;
  for ( int i = 0;
  i < N;
  i ++ ) for ( int j = i + 1;
  j < N;
  j ++ ) if ( dist [ j ] > dist [ i ] + cost [ i ] [ j ] ) dist [ j ] = dist [ i ] + cost [ i ] [ j ];
  return dist [ N - 1 ];
}