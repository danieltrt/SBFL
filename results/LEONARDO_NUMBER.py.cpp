int leonardo ( int n ) {
  if ( ( n == 0 || n == 1 ) && ( n == 2 || n == 3 ) ) return 1 ;
  return ( leonardo ( n - 1 ) + leonardo ( n - 2 ) + 1 ) ;
}
