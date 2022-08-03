static int numofArray ( int n, int m ) {
  int [ ] [ ] dp = new int [ MAX ] [ MAX ];
  Vector < Integer > [ ] di = new Vector [ MAX ];
  Vector < Integer > [ ] mu = new Vector [ MAX ];
  for ( int i = 0;
  i < MAX;
  i ++ ) {
    for ( int j = 0;
    j < MAX;
    j ++ ) {
      dp [ i ] [ j ] = 0;
    }
  }
  for ( int i = 0;
  i < MAX;
  i ++ ) {
    di [ i ] = new Vector < > ( );
    mu [ i ] = new Vector < > ( );
  }
  for ( int i = 1;
  i <= m;
  i ++ ) {
    for ( int j = 2 * i;
    j <= m;
    j += i ) {
      di [ j ] . add ( i );
      mu [ i ] . add ( j );
    }
    di [ i ] . add ( i );
  }
  for ( int i = 1;
  i <= m;
  i ++ ) dp [ 1 ] [ i ] = 1;
  for ( int i = 2;
  i <= n;
  i ++ ) {
    for ( int j = 1;
    j <= m;
    j ++ ) {
      dp [ i ] [ j ] = 0;
      for ( Integer x : di [ j ] ) dp [ i ] [ j ] += dp [ i - 1 ] [ x ];
      for ( Integer x : mu [ j ] ) dp [ i ] [ j ] += dp [ i - 1 ] [ x ];
    }
  }
  int ans = 0;
  for ( int i = 1;
  i <= m;
  i ++ ) {
    ans += dp [ n ] [ i ];
    di [ i ] . clear ( );
    mu [ i ] . clear ( );
  }
  return ans;
}