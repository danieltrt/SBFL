int f_filled ( int * boxes , int n ) {
  sort ( boxes , boxes + n ) ;
  int ans = 1 ;
  int prevWidth = boxes [ 0 ] ;
  int prevCount = 1 ;
  int currCount = 0 ;
  int currWidth = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    currWidth += boxes [ i ] ;
    currCount += 1 ;
    if ( currWidth > prevWidth && currCount > prevCount ) {
      prevWidth = currWidth ;
      prevCount = currCount ;
      currCount = 0 ;
      currWidth = 0 ;
      ans ++ ;
    }
  }
  return ans ;
}
