int f_filled ( int n ) {
  return ( n == 1 || n == 0 ) ? 1 : n * f_filled ( n - 1 ) ;
}
