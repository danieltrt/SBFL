int minDifferenceAmongMaxMin ( int arr [ ], int N, int K ) {
  sort ( arr, arr + N );
  int res = INT_MAX;
  for ( int i = 0;
  i <= ( N - K );
  i ++ ) {
    int curSeqDiff = arr [ i + K - 1 ] - arr [ i ];
    res = min ( res, curSeqDiff );
  }
  return res;
}