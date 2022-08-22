long exponentiation ( long base, long exp ) {
  if ( exp == 0 ) return 1;
  if ( exp == 1 ) return base % N;
  long t = exponentiation ( base, exp / 2 );
  t = ( t * t ) % N;
  if ( exp % 2 == 0 ) return t;
  else return ( ( base % N ) * t ) % N;
}