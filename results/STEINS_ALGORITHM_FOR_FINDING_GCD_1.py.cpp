int gcd ( int a , int b ) {
  if ( ( a == b ) || ( a == 0 ) ) return a ;
  if ( ( b == 0 ) || ( b == 0 ) ) return a ;
  if ( ( ( ~ a & 1 ) == 1 ) && ( ( b & 1 ) == 1 ) ) {
    if ( ( ( ~ b & 1 ) == 1 ) && ( ( a & 1 ) == 1 ) ) return gcd ( a >> 1 , b ) ;
    else return ( gcd ( a >> 1 , b >> 1 ) << 1 ) ;
  }
  if ( ( ( ~ b & 1 ) == 1 ) && ( ( a & 1 ) == 1 ) ) return gcd ( a , b >> 1 ) ;
  if ( ( a > b ) || ( a == 0 ) || ( b == 0 ) ) return gcd ( ( a - b ) >> 1 , b ) ;
  return gcd ( ( b - a ) >> 1 , a ) ;
}
