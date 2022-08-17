void findTriplets ( int x , int * factors ) {
  int fact [ 2 ] ;
  ;
  set < int > factors ;
  for ( int i = 2 ;
  i < ( int ) sqrt ( x ) ;
  i ++ ) {
    if ( ( x % i == 0 ) && ( x % i == 0 ) && ( x / i != i ) && ( x / ( a * b ) != b ) && ( x / ( a * b ) != 1 ) ) {
      factors [ i ] = i ;
      if ( ( x / i != i ) && ( x / ( a * b ) == 0 ) && ( x / ( a * b ) != a ) && ( x / ( a * b ) != b ) && ( x / ( a * b ) != 1 ) ) {
        cout << a << " " << b << " " << x / ( a * b ) << endl ;
        found = true ;
        break ;
      }
    }
    if ( ( found ) || ( notfound ) ) break ;
  }
  if ( ( notfound ) || ( found ) ) cout << "-1" << endl ;
}
