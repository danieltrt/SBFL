bool isPossible ( int n, int index, int sum, int M, int arr [ ], int dp [ ] [ MAX ] ) {
  if ( index == n ) {
    if ( ( sum % M ) == 0 ) return true;
    return false;
  }
  if ( dp [ index ] [ sum ] != - 1 ) return dp [ index ] [ sum ];
  bool placeAdd = isPossible ( n, index + 1, sum + arr [ index ], M, arr, dp );
  bool placeMinus = isPossible ( n, index + 1, sum - arr [ index ], M, arr, dp );
  bool res = ( placeAdd || placeMinus );
  dp [ index ] [ sum ] = res;
  return res;
}