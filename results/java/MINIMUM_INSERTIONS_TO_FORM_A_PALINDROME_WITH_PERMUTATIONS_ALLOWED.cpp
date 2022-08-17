int f_filled ( string str ) {
  int n = str . length ( ) ;
  int res = 0 ;
  vector < int > count ( 26 , 0 ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    count [ str [ i ] - 'a' ] ++ ;
  }
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) {
    if ( count [ i ] % 2 == 1 ) {
      res ++ ;
    }
  }
  return ( res == 0 ) ? 0 : res - 1 ;
}
