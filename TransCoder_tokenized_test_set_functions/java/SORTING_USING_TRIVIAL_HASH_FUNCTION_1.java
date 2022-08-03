static void sortUsingHash ( int a [ ], int n ) {
  int max = Arrays . stream ( a ) . max ( ) . getAsInt ( );
  int min = Math . abs ( Arrays . stream ( a ) . min ( ) . getAsInt ( ) );
  int hashpos [ ] = new int [ max + 1 ];
  int hashneg [ ] = new int [ min + 1 ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( a [ i ] >= 0 ) hashpos [ a [ i ] ] += 1;
    else hashneg [ Math . abs ( a [ i ] ) ] += 1;
  }
  for ( int i = min;
  i > 0;
  i -- ) {
    if ( hashneg [ i ] > 0 ) {
      for ( int j = 0;
      j < hashneg [ i ];
      j ++ ) {
        System . out . print ( ( - 1 ) * i + " " );
      }
    }
  }
  for ( int i = 0;
  i <= max;
  i ++ ) {
    if ( hashpos [ i ] > 0 ) {
      for ( int j = 0;
      j < hashpos [ i ];
      j ++ ) {
        System . out . print ( i + " " );
      }
    }
  }
}