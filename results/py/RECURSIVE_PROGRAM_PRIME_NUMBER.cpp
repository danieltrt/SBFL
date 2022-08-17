bool f_filled ( int n , int i ) {
  if ( ( n <= 2 ) || ( n == 2 ) ) return ( n % i == 0 ) ;
  if ( ( n % i == 0 ) || ( n * i > n ) ) return true ;
  return f_filled ( n , i + 1 ) ;
}
