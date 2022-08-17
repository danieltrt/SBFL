int minDist ( int arr [ ] , int n , int x , int y ) {
  int minDist = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == x || arr [ i ] == y ) {
      prev = i ;
      break ;
    }
  }
  while ( i < n ) {
    if ( arr [ i ] == x || arr [ i ] == y ) {
      if ( arr [ prev ] != arr [ i ] && ( i - prev ) < minDist ) {
        minDist = i - prev ;
        prev = i ;
      }
      else {
        prev = i ;
      }
    }
    i ++ ;
  }
  return minDist ;
}
