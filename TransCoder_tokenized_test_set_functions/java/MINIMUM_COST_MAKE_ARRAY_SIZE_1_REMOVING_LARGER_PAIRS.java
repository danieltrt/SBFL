static int cost ( int [ ] a, int n ) {
  int min = a [ 0 ];
  for ( int i = 1;
  i < a . length;
  i ++ ) {
    if ( a [ i ] < min ) min = a [ i ];
  }
  return ( n - 1 ) * min;
}