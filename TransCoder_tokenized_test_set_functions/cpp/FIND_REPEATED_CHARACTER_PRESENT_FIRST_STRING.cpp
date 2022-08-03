int findRepeatFirstN2 ( char * s ) {
  int p = - 1, i, j;
  for ( i = 0;
  i < strlen ( s );
  i ++ ) {
    for ( j = i + 1;
    j < strlen ( s );
    j ++ ) {
      if ( s [ i ] == s [ j ] ) {
        p = i;
        break;
      }
    }
    if ( p != - 1 ) break;
  }
  return p;
}