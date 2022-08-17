int fib ( int n ) {
  if ( ( n == 0 ) || ( n == 1 ) ) return 0 ;
  if ( ( n == 1 || n == 2 ) ) {
    f [ n ] = 1 ;
    return ( f [ n ] ) ;
  }
  if ( ( f [ n ] ) ) return f [ n ] ;
  if ( ( n & 1 ) != 0 ) {
    int k = ( n + 1 ) / 2 ;
    if ( ( ( n & 1 ) != 0 ) ) f [ n ] = ( fib ( k ) * fib ( k ) + fib ( k - 1 ) * fib ( k - 1 ) ) ;
    else f [ n ] = ( 2 * fib ( k - 1 ) + fib ( k ) ) * fib ( k ) ;
  }
  return returnf [ n ] ;
}
