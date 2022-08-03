void findSmallestRange ( int arr [ ] [ N ], int n, int k ) {
  int i, minval, maxval, minrange, minel, maxel, flag, minind;
  for ( i = 0;
  i <= k;
  i ++ ) ptr [ i ] = 0;
  minrange = INT_MAX;
  while ( 1 ) {
    minind = - 1;
    minval = INT_MAX;
    maxval = INT_MIN;
    flag = 0;
    for ( i = 0;
    i < k;
    i ++ ) {
      if ( ptr [ i ] == n ) {
        flag = 1;
        break;
      }
      if ( ptr [ i ] < n && arr [ i ] [ ptr [ i ] ] < minval ) {
        minind = i;
        minval = arr [ i ] [ ptr [ i ] ];
      }
      if ( ptr [ i ] < n && arr [ i ] [ ptr [ i ] ] > maxval ) {
        maxval = arr [ i ] [ ptr [ i ] ];
      }
    }
    if ( flag ) break;
    ptr [ minind ] ++;
    if ( ( maxval - minval ) < minrange ) {
      minel = minval;
      maxel = maxval;
      minrange = maxel - minel;
    }
  }
  printf ( "The smallest range is [%d , %d]\n", minel, maxel );
}