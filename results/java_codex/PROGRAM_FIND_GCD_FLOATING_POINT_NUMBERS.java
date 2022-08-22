double gcd ( double a, double b ) {
  if ( a < b ) return gcd ( b, a );
  if ( abs ( b ) < 0.001 ) return a;
  else return ( gcd ( b, a - floor ( a / b ) * b ) );
}