string to_upper ( string in ) {
  for ( int i = 0 ;
  i < in . length ( ) ;
  i ++ ) {
    if ( 'a' <= in [ i ] && in [ i ] <= 'z' ) in [ i ] = ( char ) ( in [ i ] - 'a' + 'A' ) ;
  }
  return string ( in . begin ( ) , in . end ( ) ) ;
}
