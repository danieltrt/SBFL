int largestGCDSubsequence ( int arr [ ] , int n ) {
  int ans = 0 ;
  int maxele = std :: max ( arr [ 0 ] , arr [ 1 ] ) ;
  ;
  for ( int i = 2 ;
  i <= maxele ;
  ++ i ) {
    int count = 0 ;
    for ( int j = 0 ;
    j < n ;
    ++ j ) {
      if ( arr [ j ] % i == 0 ) ++ count ;
    }
    ans = std :: max ( ans , count ) ;
  }
  return ans ;
}
