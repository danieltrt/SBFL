static void findElements ( int arr [ ], int n ) {
  int first = Integer . MIN_VALUE;
  int second = Integer . MAX_VALUE;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] > first ) {
      second = first;
      first = arr [ i ];
    }
    else if ( arr [ i ] > second ) second = arr [ i ];
  }
  for ( int i = 0;
  i < n;
  i ++ ) if ( arr [ i ] < second ) System . out . print ( arr [ i ] + " " );
}