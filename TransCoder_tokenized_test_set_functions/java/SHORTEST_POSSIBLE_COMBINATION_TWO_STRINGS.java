static void printSuperSeq ( String a, String b ) {
  int m = a . length ( ), n = b . length ( );
  int [ ] [ ] dp = new int [ m + 1 ] [ n + 1 ];
  for ( int i = 0;
  i <= m;
  i ++ ) {
    for ( int j = 0;
    j <= n;
    j ++ ) {
      if ( i == 0 ) dp [ i ] [ j ] = j;
      else if ( j == 0 ) dp [ i ] [ j ] = i;
      else if ( a . charAt ( i - 1 ) == b . charAt ( j - 1 ) ) dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ];
      else dp [ i ] [ j ] = 1 + Math . min ( dp [ i - 1 ] [ j ], dp [ i ] [ j - 1 ] );
    }
  }
  String res = "";
  int i = m, j = n;
  while ( i > 0 && j > 0 ) {
    if ( a . charAt ( i - 1 ) == b . charAt ( j - 1 ) ) {
      res = a . charAt ( i - 1 ) + res;
      i --;
      j --;
    }
    else if ( dp [ i - 1 ] [ j ] < dp [ i ] [ j - 1 ] ) {
      res = a . charAt ( i - 1 ) + res;
      i --;
    }
    else {
      res = b . charAt ( j - 1 ) + res;
      j --;
    }
  }
  while ( i > 0 ) {
    res = a . charAt ( i - 1 ) + res;
    i --;
  }
  while ( j > 0 ) {
    res = b . charAt ( j - 1 ) + res;
    j --;
  }
  System . out . println ( res );
}