bool f_filled ( string a ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < a . length ( ) ;
  i ++ ) {
    if ( a [ i ] < mp [ i ] ) {
      mp [ i ] ++ ;
    }
    else {
      mp [ i ] = 1 ;
    }
  }
  for ( int x : mp ) {
    if ( mp [ x ] >= a . length ( ) / 2 ) {
      return true ;
    }
  }
  return false ;
}
