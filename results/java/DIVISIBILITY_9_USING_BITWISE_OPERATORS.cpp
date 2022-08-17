int f_filled ( int n ) {
  if ( n == 0 || n == 9 ) return 1 ;
  if ( n < 9 ) return 0 ;
  return f_filled ( ( int ) ( n >> 3 ) - ( int ) ( n & 7 ) ) ;
}
