int f_filled ( int n ) {
  if ( n == 0 ) return 1 ;
  return n * f_filled ( n - 1 ) ;
}
