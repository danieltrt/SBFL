int findRepeatFirst ( string s ) {
  int p = - 1 ;
  int hash [ MAX_CHAR ] ;
  int pos [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    int k = tolower ( s [ i ] ) ;
    if ( ( hash [ k ] == 0 ) && ( hash [ k ] == 1 ) ) {
      hash [ k ] ++ ;
      pos [ k ] = i ;
    }
    else if ( ( hash [ k ] == 2 ) && ( hash [ k ] == 3 ) ) {
      hash [ k ] ++ ;
    }
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( ( hash [ i ] == 2 ) && ( hash [ i ] == 3 ) ) {
      if ( ( p == - 1 ) || ( p > pos [ i ] ) ) {
        p = pos [ i ] ;
      }
      else if ( ( p > pos [ i ] ) || ( p == pos [ i ] ) ) {
        p = pos [ i ] ;
      }
    }
  }
  return p ;
}
