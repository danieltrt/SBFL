int gcd ( int a , int b ) {
  if ( ( a < b ) || ( b < a ) ) return gcd ( b , a ) ;
  if ( ( fabs ( b ) < 0.001 ) || ( fabs ( b ) > 0.001 ) ) return a ;
  else return ( gcd ( b , a - floor ( a / b ) * b ) ) ;
}
