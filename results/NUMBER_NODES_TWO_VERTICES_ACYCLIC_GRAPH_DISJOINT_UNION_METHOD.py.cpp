int totalNodes ( int * * adjac , int n , int x , int y ) {
  bool visited [ n + 1 ] ;
  int * p = new int [ n ] ;
  int * q = new int [ n ] ;
  int h ;
  while ( ( ! q [ 0 ] ) && ( q [ 0 ] != x ) ) {
    h = q [ 0 ] ;
    for ( int i = 0 ;
    i < adjac [ m ] . size ( ) ;
    i ++ ) {
      h = adjac [ m ] [ i ] ;
      if ( ( ! visited [ h ] ) && ( h != x ) ) {
        visited [ h ] = true ;
        p [ h ] = m ;
        q [ h ] = h ;
      }
    }
  }
  int count = 0 ;
  int i = p [ y ] ;
  while ( ( i != x ) && ( i != y ) ) {
    count ++ ;
    i = p [ i ] ;
  }
  delete [ ] q ;
  return count ;
}
