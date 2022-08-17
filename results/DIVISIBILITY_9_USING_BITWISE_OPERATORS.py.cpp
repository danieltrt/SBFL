bool isDivBy9 ( int n ) {
  if ( ( n == 0 || n == 9 ) && ( n & 7 ) == 0 ) return true ;
  if ( ( n < 9 ) && ( n & 7 ) == 0 ) return false ;
  return isDivBy9 ( ( int ) ( n >> 3 ) - ( int ) ( n & 7 ) ) ;
}
