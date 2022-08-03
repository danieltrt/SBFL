static String lexNext ( String str, int n ) {
  char [ ] s = str . toCharArray ( );
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    if ( s [ i ] != 'z' ) {
      s [ i ] ++;
      return String . valueOf ( s );
    }
    s [ i ] = 'a';
  }
  return null;
}