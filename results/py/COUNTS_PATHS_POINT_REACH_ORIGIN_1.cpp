int f_filled ( int n , int m ) {
  if ( ( n == 0 || m == 0 ) && ( n > 0 ) ) return 1 ;
  return ( f_filled ( n - 1 , m ) + f_filled ( n , m - 1 ) ) ;
}
