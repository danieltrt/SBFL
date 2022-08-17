string arrangeString ( string string ) {
  vector < int > charCount ( MAX_CHAR , 0 ) ;
  int s = 0 ;
  for ( int i = 0 ;
  i < string . length ( ) ;
  i ++ ) {
    if ( string [ i ] >= 'A' && string [ i ] <= 'Z' ) charCount [ string [ i ] - 'A' ] ++ ;
    else s += string [ i ] - '0' ;
  }
  string res ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    char ch = ( char ) ( 'A' + i ) ;
    while ( charCount [ i ] ) {
      res += ch ;
      charCount [ i ] -- ;
    }
  }
  if ( s > 0 ) res += to_string ( s ) ;
  return res ;
}
