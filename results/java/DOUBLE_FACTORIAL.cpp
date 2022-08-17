long long f_filled ( long long n ) {
  if ( n == 0 || n == 1 ) return 1 ;
  return n * f_filled ( n - 2 ) ;
}
