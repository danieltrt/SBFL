int maxArea ( int * * mat ) {
  int hist [ C + 1 ] [ R + 1 ] ;
  for ( int i = 0 ;
  i < C ;
  i += 1 ) {
    hist [ 0 ] [ i ] = mat [ 0 ] [ i ] ;
    for ( int j = 1 ;
    j < R ;
    j += 1 ) {
      if ( ( ( mat [ j ] [ i ] == 0 ) && ( mat [ j ] [ i ] == 0 ) ) hist [ j ] [ i ] = 0 ;
      else hist [ j ] [ i ] = hist [ j - 1 ] [ i ] + 1 ;
    }
  }
  for ( int i = 0 ;
  i < R ;
  i += 1 ) {
    int count [ R + 1 ] ;
    for ( int j = 0 ;
    j < C ;
    j += 1 ) count [ hist [ i ] [ j ] ] ++ ;
    int colNo = 0 ;
    int j = R ;
    while ( ( j >= 0 ) && ( count [ j ] > 0 ) ) {
      if ( ( count [ j ] > 0 ) || ( count [ j ] == 0 ) ) {
        for ( int k = 0 ;
        k < count [ j ] ;
        k += 1 ) {
          hist [ i ] [ colNo ] = j ;
          colNo ++ ;
        }
      }
      j -- ;
    }
  }
  int maxArea = 0 ;
  for ( int i = 0 ;
  i < R ;
  i += 1 ) {
    for ( int j = 0 ;
    j < C ;
    j += 1 ) {
      int currArea = ( j + 1 ) * hist [ i ] [ j ] ;
      if ( ( currArea > maxArea ) || ( currArea == maxArea ) ) maxArea = currArea ;
    }
  }
  return maxArea ;
}
