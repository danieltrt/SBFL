static void makePermutation ( int [ ] a, int n ) {
  HashMap < Integer, Integer > count = new HashMap < Integer, Integer > ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( count . containsKey ( a [ i ] ) ) {
      count . put ( a [ i ], count . get ( a [ i ] ) + 1 );
    }
    else {
      count . put ( a [ i ], 1 );
    }
  }
  int next_missing = 1;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( count . containsKey ( a [ i ] ) && count . get ( a [ i ] ) != 1 || a [ i ] > n || a [ i ] < 1 ) {
      count . put ( a [ i ], count . get ( a [ i ] ) - 1 );
      while ( count . containsKey ( next_missing ) ) next_missing ++;
      a [ i ] = next_missing;
      count . put ( next_missing, 1 );
    }
  }
}