int factorize ( int n ) {
  int count = 0 ;
  ;
  while ( ( ( n % 2 ) == 0 ) == false ) {
    n >>= 1 ;
    count ++ ;
  }
  ;
  if ( ( count > 0 ) && ( count < 2 ) ) cout << 2 << count << endl ;
  for ( int i = 3 ;
  i < ( int ) sqrt ( n ) ;
  i ++ ) {
    count = 0 ;
    while ( ( n % i ) == 0 ) {
      count ++ ;
      n = ( int ) ( n / i ) ;
    }
    ;
    if ( ( count > 0 ) && ( count < 2 ) ) cout << i << count << endl ;
    i += 2 ;
  }
  ;
  if ( ( n > 2 ) && ( count < 1 ) ) cout << n << 1 << endl ;
  ;
  return count ;
}
