static void sortUsingHash ( int a [ ], int n ) {
  int max = Arrays . stream ( a ) . max ( ) . getAsInt ( );
  int hash [ ] = new int [ max + 1 ];
  for ( int i = 0;
  i < n;
  i ++ ) hash [ a [ i ] ] += 1;
  for ( int i = 0;
  i <= max;
  i ++ ) {
    if ( hash [ i ] != 0 ) {
      for ( int j = 0;
      j < hash [ i ];
      j ++ ) {
        System . out . print ( i + " " );
      }
    }
  }
}