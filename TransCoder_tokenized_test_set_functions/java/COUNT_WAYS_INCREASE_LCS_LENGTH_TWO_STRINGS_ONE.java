static int waysToIncreaseLCSBy1 ( String str1, String str2 ) {
  int m = str1 . length ( ), n = str2 . length ( );
  Vector < Integer > [ ] position = new Vector [ M ];
  for ( int i = 0;
  i < M;
  i ++ ) position [ i ] = new Vector < > ( );
  for ( int i = 1;
  i <= n;
  i ++ ) position [ str2 . charAt ( i - 1 ) - 'a' ] . add ( i );
  int [ ] [ ] lcsl = new int [ m + 2 ] [ n + 2 ];
  int [ ] [ ] lcsr = new int [ m + 2 ] [ n + 2 ];
  for ( int i = 0;
  i <= m + 1;
  i ++ ) for ( int j = 0;
  j <= n + 1;
  j ++ ) lcsl [ i ] [ j ] = lcsr [ i ] [ j ] = 0;
  for ( int i = 1;
  i <= m;
  i ++ ) {
    for ( int j = 1;
    j <= n;
    j ++ ) {
      if ( str1 . charAt ( i - 1 ) == str2 . charAt ( j - 1 ) ) lcsl [ i ] [ j ] = 1 + lcsl [ i - 1 ] [ j - 1 ];
      else lcsl [ i ] [ j ] = Math . max ( lcsl [ i - 1 ] [ j ], lcsl [ i ] [ j - 1 ] );
    }
  }
  for ( int i = m;
  i >= 1;
  i -- ) {
    for ( int j = n;
    j >= 1;
    j -- ) {
      if ( str1 . charAt ( i - 1 ) == str2 . charAt ( j - 1 ) ) lcsr [ i ] [ j ] = 1 + lcsr [ i + 1 ] [ j + 1 ];
      else lcsr [ i ] [ j ] = Math . max ( lcsr [ i + 1 ] [ j ], lcsr [ i ] [ j + 1 ] );
    }
  }
  int ways = 0;
  for ( int i = 0;
  i <= m;
  i ++ ) {
    for ( char d = 0;
    d < 26;
    d ++ ) {
      for ( int j = 0;
      j < position [ d ] . size ( );
      j ++ ) {
        int p = position [ d ] . elementAt ( j );
        if ( lcsl [ i ] [ p - 1 ] + lcsr [ i + 1 ] [ p + 1 ] == lcsl [ m ] [ n ] ) ways ++;
      }
    }
  }
  return ways;
}