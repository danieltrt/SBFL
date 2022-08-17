int isDivBy9 ( int n ) {
  if ( n == 0 || n == 9 ) return 1 ;
  if ( n < 9 ) return 0 ;
  return isDivBy9 ( ( int ) ( n >> 3 ) - ( int ) ( n & 7 ) ) ;
}
