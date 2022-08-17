int abFree ( string s ) {
  int bCount = 0 ;
  int res = 0 ;
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    if ( s [ ~ i ] == 'a' ) {
      res = ( res + bCount ) ;
      bCount = ( bCount * 2 ) ;
    }
    else {
      bCount ++ ;
    }
  }
  return res ;
}
