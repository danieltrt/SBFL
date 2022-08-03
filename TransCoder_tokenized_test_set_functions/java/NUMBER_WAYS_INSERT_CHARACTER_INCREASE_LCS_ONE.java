static int numberofways ( String A, String B, int N, int M ) {
  Vector < Integer > [ ] pos = new Vector [ MAX ];
  for ( int i = 0;
  i < MAX;
  i ++ ) pos [ i ] = new Vector < > ( );
  for ( int i = 0;
  i < M;
  i ++ ) pos [ B . charAt ( i ) ] . add ( i + 1 );
  int [ ] [ ] dpl = new int [ N + 2 ] [ M + 2 ];
  for ( int i = 1;
  i <= N;
  i ++ ) {
    for ( int j = 1;
    j <= M;
    j ++ ) {
      if ( A . charAt ( i - 1 ) == B . charAt ( j - 1 ) ) dpl [ i ] [ j ] = dpl [ i - 1 ] [ j - 1 ] + 1;
      else dpl [ i ] [ j ] = Math . max ( dpl [ i - 1 ] [ j ], dpl [ i ] [ j - 1 ] );
    }
  }
  int LCS = dpl [ N ] [ M ];
  int [ ] [ ] dpr = new int [ N + 2 ] [ M + 2 ];
  for ( int i = N;
  i >= 1;
  i -- ) {
    for ( int j = M;
    j >= 1;
    j -- ) {
      if ( A . charAt ( i - 1 ) == B . charAt ( j - 1 ) ) dpr [ i ] [ j ] = dpr [ i + 1 ] [ j + 1 ] + 1;
      else dpr [ i ] [ j ] = Math . max ( dpr [ i + 1 ] [ j ], dpr [ i ] [ j + 1 ] );
    }
  }
  int ans = 0;
  for ( int i = 0;
  i <= N;
  i ++ ) {
    for ( int j = 0;
    j < MAX;
    j ++ ) {
      for ( int x : pos [ j ] ) {
        if ( dpl [ i ] [ x - 1 ] + dpr [ i + 1 ] [ x + 1 ] == LCS ) {
          ans ++;
          break;
        }
      }
    }
  }
  return ans;
}