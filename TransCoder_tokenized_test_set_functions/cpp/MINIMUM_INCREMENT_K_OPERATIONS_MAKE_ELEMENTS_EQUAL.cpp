int minOps ( int arr [ ], int n, int k ) {
  int max = * max_element ( arr, arr + n );
  int res = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ( max - arr [ i ] ) % k != 0 ) return - 1;
    else res += ( max - arr [ i ] ) / k;
  }
  return res;
}