bool isPrime ( int n, int i = 2 ) {
  if ( n <= 2 ) return ( n == 2 ) ? true : false;
  if ( n % i == 0 ) return false;
  if ( i * i > n ) return true;
  return isPrime ( n, i + 1 );
}