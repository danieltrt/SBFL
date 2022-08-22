void findTriplets ( int x ) {
  vector < int > fact;
  set < int > factors;
  for ( int i = 2;
  i <= sqrt ( x );
  i ++ ) {
    if ( x % i == 0 ) {
      fact . push_back ( i );
      if ( x / i != i ) fact . push_back ( x / i );
      factors . insert ( i );
      factors . insert ( x / i );
    }
  }
  bool found = false;
  int k = fact . size ( );
  for ( int i = 0;
  i < k;
  i ++ ) {
    int a = fact [ i ];
    for ( int j = 0;
    j < k;
    j ++ ) {
      int b = fact [ j ];
      if ( ( a != b ) && ( x % ( a * b ) == 0 ) && ( x / ( a * b ) != a ) && ( x / ( a * b ) != b ) && ( x / ( a * b ) != 1 ) ) {
        cout << a << " " << b << " " << ( x / ( a * b ) );
        found = true;
        break;
      }
    }
    if ( found ) break;
  }
  if ( ! found ) cout << "-1";
}