int countSubStr ( char str [ ] ) {
  int m = 0;
  for ( int i = 0;
  str [ i ] != '\0';
  i ++ ) {
    if ( str [ i ] == '1' ) m ++;
  }
  return m * ( m - 1 ) / 2;
}