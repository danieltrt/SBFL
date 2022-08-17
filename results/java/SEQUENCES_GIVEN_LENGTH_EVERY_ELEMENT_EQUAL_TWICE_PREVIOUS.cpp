int f_filled ( int m , int n ) {
  if ( m < n ) return 0 ;
  if ( n == 0 ) return 1 ;
  return f_filled ( m - 1 , n ) + f_filled ( m / 2 , n - 1 ) ;
}
