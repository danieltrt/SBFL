static boolean isPossible ( int n, int index, int sum, int M, int arr [ ], int dp [ ] [ ] ) {
  if ( index == n ) {
    if ( ( sum % M ) == 0 ) return true;
    return false;
  }
  else if ( sum < 0 || sum >= MAX ) return false;
  if ( dp [ index ] [ sum ] != - 1 ) {
    if ( dp [ index ] [ sum ] == 0 ) return false;
    return true;
  }
  boolean placeAdd = isPossible ( n, index + 1, sum + arr [ index ], M, arr, dp );
  boolean placeMinus = isPossible ( n, index + 1, sum - arr [ index ], M, arr, dp );
  boolean res = ( placeAdd || placeMinus );
  dp [ index ] [ sum ] = ( res ) ? 1 : 0;
  return res;
}