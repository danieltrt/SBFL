static String replace ( String s, char c1, char c2 ) {
  int l = s . length ( );
  char [ ] arr = s . toCharArray ( );
  for ( int i = 0;
  i < l;
  i ++ ) {
    if ( arr [ i ] == c1 ) arr [ i ] = c2;
    else if ( arr [ i ] == c2 ) arr [ i ] = c1;
  }
  return String . valueOf ( arr );
}