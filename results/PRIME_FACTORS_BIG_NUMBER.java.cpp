void factorize ( long n ) {
  int count = 0 ;
  while ( ! ( n % 2 > 0 ) ) {
    n >>= 1 ;
    count ++ ;
  }
  if ( count > 0 ) cout << "2" << " " << count << endl ;
  for ( long i = 3 ;
  i <= ( long ) sqrt ( n ) ;
  i += 2 ) {
    count = 0 ;
    while ( n % i == 0 ) {
      count ++ ;
      n = n / i ;
    }
    if ( count > 0 ) cout << i << " " << count << endl ;
  }
  if ( n > 2 ) cout << n << " " << "1" << endl ;
}
