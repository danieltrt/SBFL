static void printOtherSides ( int n ) {
  if ( n % 2 != 0 ) {
    if ( n == 1 ) System . out . println ( "-1" );
    else {
      int b = ( n * n - 1 ) / 2;
      int c = ( n * n + 1 ) / 2;
      System . out . println ( "b = " + b + ", c = " + c );
    }
  }
  else {
    if ( n == 2 ) System . out . println ( "-1" );
    else {
      int b = n * n / 4 - 1;
      int c = n * n / 4 + 1;
      System . out . println ( "b = " + b + ", c = " + c );
    }
  }
}