static void findTriplets ( int x ) {
  Vector < Integer > fact = new Vector < Integer > ( );
  HashSet < Integer > factors = new HashSet < Integer > ( );
  for ( int i = 2;
  i <= Math . sqrt ( x );
  i ++ ) {
    if ( x % i == 0 ) {
      fact . add ( i );
      if ( x / i != i ) fact . add ( x / i );
      factors . add ( i );
      factors . add ( x / i );
    }
  }
  boolean found = false;
  int k = fact . size ( );
  for ( int i = 0;
  i < k;
  i ++ ) {
    int a = fact . get ( i );
    for ( int j = 0;
    j < k;
    j ++ ) {
      int b = fact . get ( j );
      if ( ( a != b ) && ( x % ( a * b ) == 0 ) && ( x / ( a * b ) != a ) && ( x / ( a * b ) != b ) && ( x / ( a * b ) != 1 ) ) {
        System . out . print ( a + " " + b + " " + ( x / ( a * b ) ) );
        found = true;
        break;
      }
    }
    if ( found ) break;
  }
  if ( ! found ) System . out . print ( "-1" );
}