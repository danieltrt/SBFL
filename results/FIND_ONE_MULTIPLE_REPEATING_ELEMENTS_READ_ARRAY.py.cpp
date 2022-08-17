int findRepeatingNumber ( int arr [ ] , int n ) {
  double sq = sqrt ( n ) ;
  int range__ = ( int ) ( ( n / sq ) + 1 ) ;
  int count [ range__ ] ;
  for ( int i = 0 ;
  i <= n ;
  i += 1 ) count [ ( int ) ( ( arr [ i ] - 1 ) / sq ) ] ++ ;
  int selectedBlock = range__ - 1 ;
  for ( int i = 0 ;
  i <= range__ - 1 ;
  i += 1 ) {
    if ( ( count [ i ] > sq ) && ( count [ i ] <= ( ( selectedBlock + 1 ) * sq ) ) ) {
      selectedBlock = i ;
      break ;
    }
  }
  int m [ n ] ;
  for ( int i = 0 ;
  i <= n ;
  i += 1 ) {
    if ( ( ( ( selectedBlock * sq ) < arr [ i ] ) && ( arr [ i ] <= ( ( selectedBlock + 1 ) * sq ) ) ) {
      m [ arr [ i ] ] ++ ;
      if ( ( m [ arr [ i ] ] > 1 ) && ( m [ arr [ i ] ] <= ( ( selectedBlock + 1 ) * sq ) ) ) return arr [ i ] ;
    }
  }
  return - 1 ;
}
