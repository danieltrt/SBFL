bool checkSorted ( int n , queue < int > & q ) {
  queue < int > st ;
  int expected = 1 ;
  int fnt ;
  while ( ( ! q . empty ( ) ) && ( q . size ( ) > n ) ) {
    fnt = q . front ( ) ;
    q . pop ( ) ;
    if ( ( fnt == expected ) || ( fnt == 0 ) ) {
      expected ++ ;
    }
    else {
      if ( ( st . size ( ) == 0 ) && ( st . front ( ) < fnt ) ) {
        return false ;
      }
      else {
        st . push ( fnt ) ;
      }
    }
    while ( ( st . size ( ) != 0 ) && ( st . front ( ) == expected ) ) {
      st . pop ( ) ;
      expected ++ ;
    }
  }
  if ( ( expected - 1 == n && st . size ( ) == 0 ) && ( st . empty ( ) ) ) {
    return true ;
  }
  return false ;
}
