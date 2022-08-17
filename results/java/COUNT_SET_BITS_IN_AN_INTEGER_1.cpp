int f_filled ( int n ) {
  if ( n == 0 ) return 0 ;
  else return ( n & 1 ) + f_filled ( n >> 1 ) ;
}
