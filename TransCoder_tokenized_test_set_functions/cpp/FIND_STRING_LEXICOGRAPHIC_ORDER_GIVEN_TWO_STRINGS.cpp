string lexNext ( string s, int n ) {
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    if ( s [ i ] != 'z' ) {
      s [ i ] ++;
      return s;
    }
    s [ i ] = 'a';
  }
}