int maxLower ( string str ) {
  int n = str . length ( ) ;
  int i = 0 ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) {
    if ( str [ j ] >= 'A' && str [ j ] <= 'Z' ) {
      i ++ ;
      break ;
    }
  }
  int maxCount = 0 ;
  int count [ MAX_CHAR ] ;
  for ( int j = 0 ;
  j < MAX_CHAR ;
  j ++ ) {
    count [ j ] = 0 ;
  }
  for ( int j = i ;
  j < n ;
  j ++ ) {
    if ( str [ j ] >= 'A' && str [ j ] <= 'Z' ) {
      int currCount = 0 ;
      for ( int k = 0 ;
      k < MAX_CHAR ;
      k ++ ) {
        if ( count [ k ] > 0 ) {
          currCount ++ ;
        }
      }
      maxCount = max ( maxCount , currCount ) ;
      for ( int y = 0 ;
      y < count [ j ] ;
      y ++ ) {
        count [ ( str [ j ] - 'a' ) ] = 0 ;
      }
    }
    if ( str [ j ] >= 'a' && str [ j ] <= 'z' ) {
      count [ ( str [ j ] - 'a' ) ] ++ ;
    }
  }
  return maxCount ;
}
