int maximumSumSubarray ( int * arr , int n ) {
  int minPrefixSum = 0 ;
  int res = - INT_MAX ;
  int prefixSum [ n ] ;
  prefixSum [ 0 ] = arr [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) prefixSum [ i ] = prefixSum [ i - 1 ] + arr [ i ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    res = max ( res , prefixSum [ i ] - minPrefixSum ) ;
    minPrefixSum = min ( minPrefixSum , prefixSum [ i ] ) ;
  }
  return res ;
}
