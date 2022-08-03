void reorder ( int arr [ ], int index [ ], int n ) {
  for ( int i = 0;
  i < n;
  i ++ ) {
    while ( index [ i ] != i ) {
      int oldTargetI = index [ index [ i ] ];
      char oldTargetE = arr [ index [ i ] ];
      arr [ index [ i ] ] = arr [ i ];
      index [ index [ i ] ] = index [ i ];
      index [ i ] = oldTargetI;
      arr [ i ] = oldTargetE;
    }
  }
}