int maxRemoval ( int * arr , int n ) {
  int count = 0 ;
  int cummulativeSum = 0 ;
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] >= cummulativeSum ) {
      count ++ ;
      cummulativeSum += arr [ i ] ;
    }
  }
  return count ;
}
