int maxSubarrayXOR ( int arr [ ] , int n ) {
  int ans = INT_MIN ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int currXor = 0 ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      currXor = currXor ^ arr [ j ] ;
      ans = max ( ans , currXor ) ;
    }
  }
  return ans ;
}
