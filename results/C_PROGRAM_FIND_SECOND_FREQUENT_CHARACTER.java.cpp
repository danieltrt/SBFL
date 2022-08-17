char getSecondMostFreq ( string str ) {
  vector < int > count ( NO_OF_CHARS , 0 ) ;
  int i ;
  for ( i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    ( count [ str [ i ] ] ) ++ ;
  }
  int first = 0 , second = 0 ;
  for ( i = 0 ;
  i < NO_OF_CHARS ;
  i ++ ) {
    if ( count [ i ] > count [ first ] ) {
      second = first ;
      first = i ;
    }
    else if ( count [ i ] > count [ second ] && count [ i ] != count [ first ] ) {
      second = i ;
    }
  }
  return ( char ) second ;
}
