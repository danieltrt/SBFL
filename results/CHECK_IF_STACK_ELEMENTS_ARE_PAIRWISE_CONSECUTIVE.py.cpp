bool pairWiseConsecutive ( string s ) {
  string aux ;
  while ( ( s . length ( ) != 0 ) && ( aux . length ( ) != s . length ( ) ) ) {
    aux += s [ s . length ( ) - 1 ] ;
    s . pop_back ( ) ;
  }
  bool result = true ;
  while ( ( aux . length ( ) > 1 ) && ( aux [ aux . length ( ) - 1 ] != s [ aux . length ( ) - 1 ] ) ) {
    char x = aux [ aux . length ( ) - 1 ] ;
    aux . pop_back ( ) ;
    char y = aux [ aux . length ( ) - 1 ] ;
    aux . pop_back ( ) ;
    if ( ( abs ( x - y ) != 1 ) || ( abs ( x - y ) != 1 ) ) result = false ;
    s += x ;
    s += y ;
  }
  if ( ( aux . length ( ) == 1 ) || ( aux . length ( ) == 2 ) ) s += aux [ aux . length ( ) - 1 ] ;
  return result ;
}
