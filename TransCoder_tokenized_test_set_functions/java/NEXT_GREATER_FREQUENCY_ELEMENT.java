static void NFG ( int a [ ], int n, int freq [ ] ) {
  Stack < Integer > s = new Stack < Integer > ( );
  s . push ( 0 );
  int res [ ] = new int [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) res [ i ] = 0;
  for ( int i = 1;
  i < n;
  i ++ ) {
    if ( freq [ a [ s . peek ( ) ] ] > freq [ a [ i ] ] ) s . push ( i );
    else {
      while ( freq [ a [ s . peek ( ) ] ] < freq [ a [ i ] ] && s . size ( ) > 0 ) {
        res [ s . peek ( ) ] = a [ i ];
        s . pop ( );
      }
      s . push ( i );
    }
  }
  while ( s . size ( ) > 0 ) {
    res [ s . peek ( ) ] = - 1;
    s . pop ( );
  }
  for ( int i = 0;
  i < n;
  i ++ ) {
    System . out . print ( res [ i ] + " " );
  }
}