void NFG ( int a [ ], int n, int freq [ ] ) {
  stack < int > s;
  s . push ( 0 );
  int res [ n ] = {
    0 };
    for ( int i = 1;
    i < n;
    i ++ ) {
      if ( freq [ a [ s . top ( ) ] ] > freq [ a [ i ] ] ) s . push ( i );
      else {
        while ( freq [ a [ s . top ( ) ] ] < freq [ a [ i ] ] && ! s . empty ( ) ) {
          res [ s . top ( ) ] = a [ i ];
          s . pop ( );
        }
        s . push ( i );
      }
    }
    while ( ! s . empty ( ) ) {
      res [ s . top ( ) ] = - 1;
      s . pop ( );
    }
    for ( int i = 0;
    i < n;
    i ++ ) {
      cout << res [ i ] << " ";
    }
  }