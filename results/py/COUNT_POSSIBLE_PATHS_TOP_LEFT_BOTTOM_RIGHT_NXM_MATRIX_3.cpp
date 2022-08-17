int f_filled ( int m , int n ) {
  for ( int i = n ;
  i < ( m + n - 1 ) ;
  i ++ ) {
    path *= i ;
    path /= ( i - n + 1 ) ;
  }
  returnpath = 0 ;
  return returnpath ;
}
