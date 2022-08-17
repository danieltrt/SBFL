int f_filled ( int * arr , int n ) {
  int * s = new int [ n ] ;
  int first = 0 ;
  int second = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] != 0 ) {
      s [ i ] = arr [ i ] ;
      continue ;
    }
    if ( ( arr [ i ] > first ) && ( arr [ i ] < second ) ) {
      second = first ;
      first = arr [ i ] ;
    }
    else if ( ( arr [ i ] > second ) && ( arr [ i ] < second ) ) {
      second = arr [ i ] ;
    }
  }
  return ( first * second ) ;
}
