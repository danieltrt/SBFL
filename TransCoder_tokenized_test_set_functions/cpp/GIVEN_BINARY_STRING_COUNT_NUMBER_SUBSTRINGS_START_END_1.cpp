int countSubStr ( char str [ ] ) {
  int res = 0;
  for ( int i = 0;
  str [ i ] != '\0';
  i ++ ) {
    if ( str [ i ] == '1' ) {
      for ( int j = i + 1;
      str [ j ] != '\0';
      j ++ ) if ( str [ j ] == '1' ) res ++;
    }
  }
  return res;
}