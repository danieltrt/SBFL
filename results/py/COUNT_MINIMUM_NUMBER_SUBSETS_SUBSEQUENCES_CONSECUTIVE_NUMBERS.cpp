int f_filled ( int * arr , int n ) {
  int * x = ( int * ) arr ;
  int count = 1 ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( ( x [ i ] + 1 != x [ i + 1 ] ) && ( x [ i ] + 1 != x [ i + 1 ] ) ) {
      count = count + 1 ;
    }
  }
  return count ;
}
