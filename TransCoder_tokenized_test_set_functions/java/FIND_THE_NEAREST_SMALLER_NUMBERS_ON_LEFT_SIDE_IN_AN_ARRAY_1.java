static void printPrevSmaller ( int arr [ ], int n ) {
  Stack < Integer > S = new Stack < > ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    while ( ! S . empty ( ) && S . peek ( ) >= arr [ i ] ) {
      S . pop ( );
    }
    if ( S . empty ( ) ) {
      System . out . print ( "_, " );
    }
    else {
      System . out . print ( S . peek ( ) + ", " );
    }
    S . push ( arr [ i ] );
  }
}