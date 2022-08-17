string toUpper ( string string ) {
  for ( int i = 0 ;
  i < string . length ( ) ;
  i ++ ) {
    if ( ( 'a' <= string [ i ] && string [ i ] <= 'z' ) || ( 'A' <= string [ i ] && string [ i ] <= 'Z' ) ) string = ( string . substr ( 0 , i ) + ( char ) ( ( string [ i ] - 'a' + 'A' ) ) + string . substr ( i + 1 ) ) ;
  }
  return string ;
}
