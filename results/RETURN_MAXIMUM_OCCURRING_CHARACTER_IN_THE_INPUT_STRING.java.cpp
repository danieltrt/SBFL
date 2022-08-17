char getMaxOccuringChar ( const std :: string & str ) {
  std :: vector < int > count ( ASCII_SIZE ) ;
  std :: string :: size_type pos = 0 ;
  for ( std :: string :: size_type i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    count [ str [ i ] ] ++ ;
  }
  int max = - 1 ;
  char result = ' ' ;
  for ( std :: string :: size_type i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( max < count [ str [ i ] ] ) {
      max = count [ str [ i ] ] ;
      result = str [ i ] ;
    }
  }
  return result ;
}
