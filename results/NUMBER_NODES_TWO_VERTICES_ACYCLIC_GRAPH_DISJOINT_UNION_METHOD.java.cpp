int totalNodes ( vector < int > adjac , int n , int x , int y ) {
  vector < bool > visited ( n + 1 , false ) ;
  memset ( visited . data ( ) , false , n + 1 ) ;
  vector < int > p ( n , 0 ) ;
  queue < int > q ;
  q . push ( x ) ;
  visited [ x ] = true ;
  int m ;
  while ( ! q . empty ( ) ) {
    m = q . front ( ) ;
    q . pop ( ) ;
    for ( int i = 0 ;
    i < adjac [ m ] . size ( ) ;
    ++ i ) {
      int h = adjac [ m ] [ i ] ;
      if ( visited [ h ] != true ) {
        visited [ h ] = true ;
        p [ h ] = m ;
        q . push ( h ) ;
      }
    }
  }
  int count = 0 ;
  int i = p [ y ] ;
  while ( i != x ) {
    count ++ ;
    i = p [ i ] ;
  }
  return count ;
}
