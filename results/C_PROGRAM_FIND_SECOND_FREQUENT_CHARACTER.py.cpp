char getSecondMostFreq ( string str ) {
  const int NO_OF_CHARS = 256 ;
  int count [ NO_OF_CHARS ] ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) count [ str [ i ] ] ++ ;
  int first = 0 , second = 0 ;
  for ( int i = 0 ;
  i < NO_OF_CHARS ;
  i ++ ) {
    if ( count [ i ] > count [ first ] ) {
      second = first ;
      first = i ;
    }
    else if ( ( count [ i ] > count [ second ] && count [ i ] != count [ first ] ) ) second = i ;
  }
  return ( char ) second ;
}
