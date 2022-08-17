int f_filled ( int * arr , int n ) {
  if ( n < 3 ) return - 1 ;
  int f_filled = - ( INT_MAX - 1 ) ;
  for ( int i = 0 ;
  i <= n - 2 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n - 1 ;
    j ++ ) {
      for ( int k = j + 1 ;
      k <= n ;
      k ++ ) {
        f_filled = max ( f_filled , arr [ i ] * arr [ j ] * arr [ k ] ) ;
      }
    }
  }
  return f_filled ;
}
