static void printDivisors ( int n ) {
  Vector < Integer > v = new Vector < > ( );
  for ( int i = 1;
  i <= Math . sqrt ( n );
  i ++ ) {
    if ( n % i == 0 ) {
      if ( n / i == i ) System . out . printf ( "%d ", i );
      else {
        System . out . printf ( "%d ", i );
        v . add ( n / i );
      }
    }
  }
  for ( int i = v . size ( ) - 1;
  i >= 0;
  i -- ) System . out . printf ( "%d ", v . get ( i ) );
}