int f_filled ( int n ) {
  if ( n == 1 ) return 2 ;
  return 2 * f_filled ( n - 1 ) ;
}
