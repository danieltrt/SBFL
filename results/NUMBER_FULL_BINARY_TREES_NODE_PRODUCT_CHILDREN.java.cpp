int numoffbt ( int arr [ ] , int n ) {
  int maxvalue = - 2147483647 ;
  int minvalue = 2147483647 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    maxvalue = max ( maxvalue , arr [ i ] ) ;
    minvalue = min ( minvalue , arr [ i ] ) ;
  }
  int mark [ maxvalue + 2 ] ;
  int value [ maxvalue + 2 ] ;
  memset ( mark , 0 , sizeof ( mark ) ) ;
  memset ( value , 0 , sizeof ( value ) ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    mark [ arr [ i ] ] = 1 ;
    value [ arr [ i ] ] = 1 ;
  }
  int ans = 0 ;
  for ( int i = minvalue ;
  i <= maxvalue ;
  i ++ ) {
    if ( mark [ i ] != 0 ) {
      for ( int j = i + i ;
      j <= maxvalue && j / i <= i ;
      j += i ) {
        if ( mark [ j ] == 0 ) continue ;
        value [ j ] = value [ j ] + ( value [ i ] * value [ j / i ] ) ;
        if ( i != j / i ) value [ j ] = value [ j ] + ( value [ i ] * value [ j / i ] ) ;
      }
    }
    ans += value [ i ] ;
  }
  return ans ;
}
