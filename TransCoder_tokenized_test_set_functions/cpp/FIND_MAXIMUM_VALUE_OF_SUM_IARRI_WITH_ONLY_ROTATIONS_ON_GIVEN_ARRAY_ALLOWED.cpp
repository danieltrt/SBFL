int maxSum ( int arr [ ], int n ) {
  int arrSum = 0;
  int currVal = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    arrSum = arrSum + arr [ i ];
    currVal = currVal + ( i * arr [ i ] );
  }
  int maxVal = currVal;
  for ( int j = 1;
  j < n;
  j ++ ) {
    currVal = currVal + arrSum - n * arr [ n - j ];
    if ( currVal > maxVal ) maxVal = currVal;
  }
  return maxVal;
}