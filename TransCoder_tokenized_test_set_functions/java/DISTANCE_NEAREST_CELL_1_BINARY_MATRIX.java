static void printDistance ( int mat [ ] [ ] ) {
  int ans [ ] [ ] = new int [ N ] [ M ];
  for ( int i = 0;
  i < N;
  i ++ ) for ( int j = 0;
  j < M;
  j ++ ) ans [ i ] [ j ] = Integer . MAX_VALUE;
  for ( int i = 0;
  i < N;
  i ++ ) for ( int j = 0;
  j < M;
  j ++ ) {
    for ( int k = 0;
    k < N;
    k ++ ) for ( int l = 0;
    l < M;
    l ++ ) {
      if ( mat [ k ] [ l ] == 1 ) ans [ i ] [ j ] = Math . min ( ans [ i ] [ j ], Math . abs ( i - k ) + Math . abs ( j - l ) );
    }
  }
  for ( int i = 0;
  i < N;
  i ++ ) {
    for ( int j = 0;
    j < M;
    j ++ ) System . out . print ( ans [ i ] [ j ] + " " );
    System . out . println ( );
  }
}