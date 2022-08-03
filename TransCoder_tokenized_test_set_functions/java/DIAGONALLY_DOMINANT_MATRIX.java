static boolean isDDM ( int m [ ] [ ], int n ) {
  for ( int i = 0;
  i < n;
  i ++ ) {
    int sum = 0;
    for ( int j = 0;
    j < n;
    j ++ ) sum += Math . abs ( m [ i ] [ j ] );
    sum -= Math . abs ( m [ i ] [ i ] );
    if ( Math . abs ( m [ i ] [ i ] ) < sum ) return false;
  }
  return true;
}