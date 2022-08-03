static void translate ( char str [ ] ) {
  for ( int i = 1;
  i < str . length;
  i ++ ) {
    if ( str [ i - 1 ] == 'A' && str [ i ] == 'B' ) {
      str [ i - 1 ] = 'C';
      int j;
      for ( j = i;
      j < str . length - 1;
      j ++ ) str [ j ] = str [ j + 1 ];
      str [ j ] = ' ';
    }
  }
  return;
}