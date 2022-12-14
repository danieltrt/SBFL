static int getLevenstein ( StringBuilder input ) {
  StringBuilder revInput = new StringBuilder ( input );
  revInput = revInput . reverse ( );
  int n = input . length ( );
  int [ ] [ ] dp = new int [ n + 1 ] [ n + 1 ];
  for ( int i = 0;
  i <= n;
  ++ i ) {
    dp [ 0 ] [ i ] = i;
    dp [ i ] [ 0 ] = i;
  }
  for ( int i = 1;
  i <= n;
  ++ i ) {
    for ( int j = 1;
    j <= n;
    ++ j ) {
      if ( input . charAt ( i - 1 ) == revInput . charAt ( j - 1 ) ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ];
      else dp [ i ] [ j ] = 1 + Math . min ( dp [ i - 1 ] [ j ], dp [ i ] [ j - 1 ] );
    }
  }
  int res = Integer . MAX_VALUE;
  for ( int i = n, j = 0;
  i >= 0;
  i --, j ++ ) {
    res = Math . min ( res, dp [ i ] [ j ] );
    if ( i < n ) res = Math . min ( res, dp [ i + 1 ] [ j ] );
    if ( i > 0 ) res = Math . min ( res, dp [ i - 1 ] [ j ] );
  }
  return res;
}