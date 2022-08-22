string lexNext ( string str, int n ) {
  char s [ n ];
  strcpy ( s, str . c_str ( ) );
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    if ( s [ i ] != 'z' ) {
      s [ i ] ++;
      return string ( s );
    }
    s [ i ] = 'a';
  }
  return "";
}