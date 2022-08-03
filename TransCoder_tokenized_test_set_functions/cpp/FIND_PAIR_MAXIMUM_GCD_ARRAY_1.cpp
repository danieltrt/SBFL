int findMaxGCD ( int arr [ ], int n ) {
  int high = 0;
  for ( int i = 0;
  i < n;
  i ++ ) high = max ( high, arr [ i ] );
  int count [ high + 1 ] = {
    0 };
    for ( int i = 0;
    i < n;
    i ++ ) count [ arr [ i ] ] ++;
    int counter = 0;
    for ( int i = high;
    i >= 1;
    i -- ) {
      int j = i;
      counter = 0;
      while ( j <= high ) {
        if ( count [ j ] >= 2 ) return j;
        else if ( count [ j ] == 1 ) counter ++;
        j += i;
        if ( counter == 2 ) return i;
      }
    }
  }