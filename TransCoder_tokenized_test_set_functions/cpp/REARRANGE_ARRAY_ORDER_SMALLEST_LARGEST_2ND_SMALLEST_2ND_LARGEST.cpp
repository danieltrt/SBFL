void rearrangeArray ( int arr [ ], int n ) {
  sort ( arr, arr + n );
  int tempArr [ n ];
  int ArrIndex = 0;
  for ( int i = 0, j = n - 1;
  i <= n / 2 || j > n / 2;
  i ++, j -- ) {
    tempArr [ ArrIndex ] = arr [ i ];
    ArrIndex ++;
    tempArr [ ArrIndex ] = arr [ j ];
    ArrIndex ++;
  }
  for ( int i = 0;
  i < n;
  i ++ ) arr [ i ] = tempArr [ i ];
}