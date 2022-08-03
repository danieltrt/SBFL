static void freq ( int ar [ ] [ ], int m, int n ) {
  int even = 0, odd = 0;
  for ( int i = 0;
  i < m;
  ++ i ) {
    for ( int j = 0;
    j < n;
    ++ j ) {
      if ( ( ar [ i ] [ j ] % 2 ) == 0 ) ++ even;
      else ++ odd;
    }
  }
  System . out . print ( " Frequency of odd number =" + odd + " \n" );
  System . out . print ( " Frequency of even number = " + even + " \n" );
}