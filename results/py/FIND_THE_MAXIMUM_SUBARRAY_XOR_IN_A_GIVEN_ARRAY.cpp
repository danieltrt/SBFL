int f_filled ( int arr [ ] , int n ) {
  int ans = - 2147483648 ;
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
