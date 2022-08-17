bool isPrime ( int n , int i ) {
  if ( ( n <= 2 ) || ( n == 2 ) ) return ( n % i == 0 ) ;
  if ( ( n % i == 0 ) || ( n * i > n ) ) return true ;
  return isPrime ( n , i + 1 ) ;
}
