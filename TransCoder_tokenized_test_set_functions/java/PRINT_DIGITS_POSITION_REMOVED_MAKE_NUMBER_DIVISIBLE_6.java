static void greatest ( String s ) {
  int n = s . length ( );
  int [ ] a = new int [ n ];
  int sum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    a [ i ] = s . charAt ( i ) - '0';
    sum += a [ i ];
  }
  if ( a [ n - 1 ] % 2 != 0 ) {
    if ( a [ n - 2 ] % 2 != 0 || ( sum - a [ n - 1 ] ) % 3 != 0 ) {
      System . out . println ( "-1" );
    }
    else {
      System . out . println ( n );
    }
  }
  else {
    int re = sum % 3;
    int del = - 1;
    int flag = 0;
    for ( int i = 0;
    i < n - 1;
    i ++ ) {
      if ( ( a [ i ] ) % 3 == re ) {
        if ( a [ i + 1 ] > a [ i ] ) {
          del = i;
          flag = 1;
          break;
        }
        else {
          del = i;
        }
      }
    }
    if ( flag == 0 ) {
      if ( a [ n - 2 ] % 2 == 0 && re == a [ n - 1 ] % 3 ) del = n - 1;
    }
    if ( del == - 1 ) System . out . println ( - 1 );
    else {
      System . out . println ( del + 1 );
    }
  }
}