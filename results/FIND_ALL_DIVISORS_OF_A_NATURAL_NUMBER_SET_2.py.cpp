void printDivisors ( int n ) {
  vector < int > vec ;
  for ( int i = 1 ;
  i <= ( int ) sqrt ( n ) ;
  i ++ ) {
    if ( ( n % i ) == 0 ) {
      if ( ( n / i ) == i ) cout << i << " " ;
      else {
        cout << i << " " ;
        vec . push_back ( ( int ) ( n / i ) ) ;
      }
    }
  }
  for ( int i = vec . size ( ) - 1 ;
  i >= 0 ;
  i -- ) cout << vec [ i ] << " " ;
}
