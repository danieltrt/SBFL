int getMaxOccuringChar ( string str ) {
  int count [ ASCII_SIZE ] ;
  int max = - 1 ;
  int c = 0 ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) count [ str [ i ] ] ++ ;
  ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( max < count [ str [ i ] ] ) {
      max = count [ str [ i ] ] ;
      c = str [ i ] ;
    }
  }
  return c ;
}
