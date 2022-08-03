void freq ( int ar [ ] [ MAX ], int m, int n ) {
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
  printf ( " Frequency of odd number = %d \n", odd );
  printf ( " Frequency of even number = %d \n", even );
}