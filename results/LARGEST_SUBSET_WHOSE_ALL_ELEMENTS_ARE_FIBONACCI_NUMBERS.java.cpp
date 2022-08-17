void findFibSubset ( int32_t * x ) {
  int32_t max = std :: max ( * x , * x + max ) ;
  std :: vector < int32_t > fib ;
  std :: vector < int32_t > result ;
  int32_t a = 0 ;
  int32_t b = 1 ;
  while ( b < max ) {
    int32_t c = a + b ;
    a = b ;
    b = c ;
    fib . push_back ( c ) ;
  }
  for ( int32_t i = 0 ;
  i < x [ 0 ] ;
  i ++ ) {
    if ( fib . find ( x [ i ] ) != fib . end ( ) ) result . push_back ( x [ i ] ) ;
  }
  std :: cout << result << std :: endl ;
}
