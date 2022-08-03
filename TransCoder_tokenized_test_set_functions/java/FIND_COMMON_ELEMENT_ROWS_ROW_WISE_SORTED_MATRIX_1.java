static int findCommon ( int mat [ ] [ ] ) {
  HashMap < Integer, Integer > cnt = new HashMap < Integer, Integer > ( );
  int i, j;
  for ( i = 0;
  i < M;
  i ++ ) {
    if ( cnt . containsKey ( mat [ i ] [ 0 ] ) ) {
      cnt . put ( mat [ i ] [ 0 ], cnt . get ( mat [ i ] [ 0 ] ) + 1 );
    }
    else {
      cnt . put ( mat [ i ] [ 0 ], 1 );
    }
    for ( j = 1;
    j < N;
    j ++ ) {
      if ( mat [ i ] [ j ] != mat [ i ] [ j - 1 ] ) if ( cnt . containsKey ( mat [ i ] [ j ] ) ) {
        cnt . put ( mat [ i ] [ j ], cnt . get ( mat [ i ] [ j ] ) + 1 );
      }
      else {
        cnt . put ( mat [ i ] [ j ], 1 );
      }
    }
  }
  for ( Map . Entry < Integer, Integer > ele : cnt . entrySet ( ) ) {
    if ( ele . getValue ( ) == M ) return ele . getKey ( );
  }
  return - 1;
}