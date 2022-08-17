int f_filled ( int n ) {
  if ( ( n == 0 || n == 1 ) && ( n == 2 || n == 3 || n == 4 ) ) return n ;
  return max ( ( f_filled ( n / 2 ) + f_filled ( n / 3 ) + f_filled ( n / 4 ) ) , n ) ;
}
