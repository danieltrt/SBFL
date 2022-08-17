int maxSum ( ) {
  int arrSum = 0 ;
  int currVal = 0 ;
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i ++ ) {
    arrSum = arrSum + arr [ i ] ;
    currVal = currVal + ( i * arr [ i ] ) ;
  }
  int maxVal = currVal ;
  for ( int j = 1 ;
  j < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  j ++ ) {
    currVal = currVal + arrSum - sizeof ( arr [ 0 ] ) * arr [ sizeof ( arr ) - j ] ;
    if ( currVal > maxVal ) maxVal = currVal ;
  }
  return maxVal ;
}
