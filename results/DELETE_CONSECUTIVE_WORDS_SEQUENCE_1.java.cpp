int removeConsecutiveSame ( const Vector < char > & v ) {
  Vector < char > st ;
  for ( int i = 0 ;
  i < v . size ( ) ;
  i ++ ) {
    if ( st . empty ( ) ) {
      st . push ( v [ i ] ) ;
    }
    else {
      char str = st . top ( ) ;
      if ( strcmp ( str , v [ i ] ) == 0 ) {
        st . pop ( ) ;
      }
      else {
        st . push ( v [ i ] ) ;
      }
    }
  }
  return st . size ( ) ;
}
