void convertOpposite ( string str ) {
  int ln = str . length ( ) ;
  for ( int i = 0 ;
  i < ln ;
  i ++ ) {
    char c = str [ i ] ;
    if ( islower ( c ) ) {
      str . replace ( i , i + 1 , toupper ( c ) + "" ) ;
    }
    else {
      str . replace ( i , i + 1 , tolower ( c ) + "" ) ;
    }
  }
}
