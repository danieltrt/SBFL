static int minStepToDeleteString ( String str ) {
  int N = str . length ( );
  int [ ] [ ] dp = new int [ N + 1 ] [ N + 1 ];
  for ( int i = 0;
  i <= N;
  i ++ ) for ( int j = 0;
  j <= N;
  j ++ ) dp [ i ] [ j ] = 0;
  for ( int len = 1;
  len <= N;
  len ++ ) {
    for ( int i = 0, j = len - 1;
    j < N;
    i ++, j ++ ) {
      if ( len == 1 ) dp [ i ] [ j ] = 1;
      else {
        dp [ i ] [ j ] = 1 + dp [ i + 1 ] [ j ];
        if ( str . charAt ( i ) == str . charAt ( i + 1 ) ) dp [ i ] [ j ] = Math . min ( 1 + dp [ i + 2 ] [ j ], dp [ i ] [ j ] );
        for ( int K = i + 2;
        K <= j;
        K ++ ) if ( str . charAt ( i ) == str . charAt ( K ) ) dp [ i ] [ j ] = Math . min ( dp [ i + 1 ] [ K - 1 ] + dp [ K + 1 ] [ j ], dp [ i ] [ j ] );
      }
    }
  }
  return dp [ 0 ] [ N - 1 ];
}