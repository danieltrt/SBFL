int maxSum ( int * * grid , int n ) {
  int incl = max ( grid [ 0 ] [ 0 ] , grid [ 1 ] [ 0 ] ) ;
  int excl = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int exclNew = max ( excl , incl ) ;
    incl = excl + max ( grid [ 0 ] [ i ] , grid [ 1 ] [ i ] ) ;
    excl = exclNew ;
  }
  return max ( excl , incl ) ;
}
