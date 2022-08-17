int f_filled ( int n ) {
  if ( n == 0 ) return 0 ;
  else return 1 + f_filled ( n & ( n - 1 ) ) ;
}
