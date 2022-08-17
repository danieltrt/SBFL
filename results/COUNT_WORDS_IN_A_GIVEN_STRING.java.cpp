int countWords ( string str ) {
  int state = OUT ;
  int wc = 0 ;
  int i = 0 ;
  while ( i < str . length ( ) ) {
    if ( str [ i ] == ' ' || str [ i ] == '\n' || str [ i ] == '\t' ) {
      state = OUT ;
    }
    else if ( state == OUT ) {
      state = IN ;
      ++ wc ;
    }
    ++ i ;
  }
  return wc ;
}
