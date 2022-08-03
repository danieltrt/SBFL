static void subsetDifference ( int n ) {
  int s = n * ( n + 1 ) / 2;
  if ( n % 4 == 0 ) {
    System . out . println ( "First subset sum = " + s / 2 );
    System . out . println ( "Second subset sum = " + s / 2 );
    System . out . println ( "Difference = " + 0 );
  }
  else {
    if ( n % 4 == 1 || n % 4 == 2 ) {
      System . out . println ( "First subset sum = " + s / 2 );
      System . out . println ( "Second subset sum = " + ( ( s / 2 ) + 1 ) );
      System . out . println ( "Difference = " + 1 );
    }
    else {
      System . out . println ( "First subset sum = " + s / 2 );
      System . out . println ( "Second subset sum = " + s / 2 );
      System . out . println ( "Difference = " + 0 );
    }
  }
}