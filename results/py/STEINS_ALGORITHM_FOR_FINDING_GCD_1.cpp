int f_filled ( int a , int b ) {
  if ( ( a == b ) || ( a == 0 ) ) return a ;
  if ( ( b == 0 ) || ( b == 0 ) ) return a ;
  if ( ( ( ~ a & 1 ) == 1 ) && ( ( b & 1 ) == 1 ) ) {
    if ( ( ( ~ b & 1 ) == 1 ) && ( ( a & 1 ) == 1 ) ) return f_filled ( a >> 1 , b ) ;
    else return ( f_filled ( a >> 1 , b >> 1 ) << 1 ) ;
  }
  if ( ( ( ~ b & 1 ) == 1 ) && ( ( a & 1 ) == 1 ) ) return f_filled ( a , b >> 1 ) ;
  if ( ( a > b ) || ( a == 0 ) || ( b == 0 ) ) return f_filled ( ( a - b ) >> 1 , b ) ;
  return f_filled ( ( b - a ) >> 1 , a ) ;
}
