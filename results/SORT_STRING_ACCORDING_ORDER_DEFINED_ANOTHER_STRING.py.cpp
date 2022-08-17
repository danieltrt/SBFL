string sortByPattern ( string str , string pat ) {
  static int MAX_CHAR = 256 ;
  int count [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) count [ str [ i ] - 97 ] ++ ;
  int index = 0 ;
  ;
  str = "" ;
  for ( int i = 0 ;
  i < pat . length ( ) ;
  i ++ ) {
    int j = 0 ;
    while ( ( j < count [ pat [ i ] - 'a' ] ) && ( j < count [ pat [ i ] - 'a' ] ) ) {
      str += pat [ i ] ;
      j = j + 1 ;
      index ++ ;
    }
  }
  return str ;
}
