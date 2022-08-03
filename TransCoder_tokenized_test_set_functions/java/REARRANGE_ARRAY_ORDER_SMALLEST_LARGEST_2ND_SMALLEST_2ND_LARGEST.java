static void rearrangeArray ( int arr [ ], int n ) {
  Arrays . sort ( arr );
  int [ ] tempArr = new int [ n ];
  int ArrIndex = 0;
  for ( int i = 0, j = n - 1;
  i <= n / 2 || j > n / 2;
  i ++, j -- ) {
    if ( ArrIndex < n ) {
      tempArr [ ArrIndex ] = arr [ i ];
      ArrIndex ++;
    }
    if ( ArrIndex < n ) {
      tempArr [ ArrIndex ] = arr [ j ];
      ArrIndex ++;
    }
  }
  for ( int i = 0;
  i < n;
  i ++ ) arr [ i ] = tempArr [ i ];
}