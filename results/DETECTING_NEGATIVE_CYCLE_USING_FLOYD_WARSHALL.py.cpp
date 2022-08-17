bool negCyclefloydWarshall ( int * * graph ) {
  int * * dist = new int * [ V + 1 ] ;
  int j = 0 ;
  for ( int i = 0 ;
  i < V + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < V ;
    j ++ ) {
      dist [ i ] [ j ] = graph [ i ] [ j ] ;
    }
  }
  for ( int k = 0 ;
  k < V ;
  k ++ ) {
    for ( int i = 0 ;
    i < V ;
    i ++ ) {
      for ( int j = 0 ;
      j < V ;
      j ++ ) {
        if ( ( dist [ i ] [ k ] + dist [ k ] [ j ] < dist [ i ] [ j ] ) && ( dist [ i ] [ j ] < 0 ) ) {
          dist [ i ] [ j ] = dist [ i ] [ k ] + dist [ k ] [ j ] ;
        }
      }
    }
  }
  for ( int i = 0 ;
  i < V ;
  i ++ ) {
    if ( ( dist [ i ] [ i ] < 0 ) && ( dist [ i ] [ i ] < 0 ) ) {
      return true ;
    }
  }
  return false ;
}
