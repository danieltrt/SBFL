int f_filled ( int arr [ ] , int n , int x , int y ) {
  int f_filled = INT_MAX ;
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
      if ( arr [ prev ] != arr [ i ] && ( i - prev ) < f_filled ) {
        f_filled = i - prev ;
        prev = i ;
      }
      else {
        prev = i ;
      }
    }
    i ++ ;
  }
  return f_filled ;
}
