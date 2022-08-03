public static int findMinimumAngle ( int arr [ ], int n ) {
  int l = 0, sum = 0, ans = 360;
  for ( int i = 0;
  i < n;
  i ++ ) {
    sum += arr [ i ];
    while ( sum >= 180 ) {
      ans = Math . min ( ans, 2 * Math . abs ( 180 - sum ) );
      sum -= arr [ l ];
      l ++;
    }
    ans = Math . min ( ans, 2 * Math . abs ( 180 - sum ) );
  }
  return ans;
}