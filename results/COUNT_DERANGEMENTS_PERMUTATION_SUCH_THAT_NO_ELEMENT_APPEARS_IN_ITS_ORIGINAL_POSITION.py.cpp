int countDer ( int n ) {
  if ( ( n == 1 ) || ( n == 0 ) ) return 0 ;
  if ( ( n == 2 ) || ( n == 1 ) ) return 1 ;
  return ( n - 1 ) * ( countDer ( n - 1 ) + countDer ( n - 2 ) ) ;
}
