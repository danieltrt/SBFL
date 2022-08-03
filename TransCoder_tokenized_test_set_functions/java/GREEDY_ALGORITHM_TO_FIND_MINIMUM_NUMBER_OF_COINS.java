static void findMin ( int V ) {
  Vector < Integer > ans = new Vector < > ( );
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    while ( V >= deno [ i ] ) {
      V -= deno [ i ];
      ans . add ( deno [ i ] );
    }
  }
  for ( int i = 0;
  i < ans . size ( );
  i ++ ) {
    System . out . print ( " " + ans . elementAt ( i ) );
  }
}