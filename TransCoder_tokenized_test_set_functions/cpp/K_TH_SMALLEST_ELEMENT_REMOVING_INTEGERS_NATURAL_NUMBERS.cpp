int ksmallest ( int arr [ ], int n, int k ) {
  int b [ MAX ];
  memset ( b, 0, sizeof b );
  for ( int i = 0;
  i < n;
  i ++ ) b [ arr [ i ] ] = 1;
  for ( int j = 1;
  j < MAX;
  j ++ ) {
    if ( b [ j ] != 1 ) k --;
    if ( ! k ) return j;
  }
}