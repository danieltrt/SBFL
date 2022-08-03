static String to_upper ( char [ ] in ) {
  for ( int i = 0;
  i < in . length;
  i ++ ) {
    if ( 'a' <= in [ i ] & in [ i ] <= 'z' ) {
      in [ i ] = ( char ) ( in [ i ] - 'a' + 'A' );
    }
  }
  return String . valueOf ( in );
}