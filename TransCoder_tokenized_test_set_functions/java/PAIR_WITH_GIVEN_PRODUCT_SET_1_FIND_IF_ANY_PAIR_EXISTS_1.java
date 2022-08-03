static boolean isProduct ( int arr [ ], int n, int x ) {
  HashSet < Integer > hset = new HashSet < > ( );
  if ( n < 2 ) return false;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] == 0 ) {
      if ( x == 0 ) return true;
      else continue;
    }
    if ( x % arr [ i ] == 0 ) {
      if ( hset . contains ( x / arr [ i ] ) ) return true;
      hset . add ( arr [ i ] );
    }
  }
  return false;
}