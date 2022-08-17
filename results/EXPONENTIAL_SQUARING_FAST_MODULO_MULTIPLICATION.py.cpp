long long exponentiation ( long long bas , long long exp ) {
  if ( ( exp == 0 ) || ( exp == 1 ) ) return 1 ;
  ;
  if ( ( exp == 1 ) || ( exp == 2 ) ) return bas % N ;
  ;
  long long t = exponentiation ( bas , ( long long ) ( exp / 2 ) ) ;
  t = ( t * t ) % N ;
  ;
  if ( ( exp % 2 ) == 0 ) return t ;
  else return ( ( bas % N ) * t ) % N ;
}
