void translate ( char * str ) {
  if ( str [ 0 ] == '' ) return;
  for ( int i = 1;
  str [ i ] != '';
  i ++ ) {
    if ( str [ i - 1 ] == 'A' && str [ i ] == 'B' ) {
      str [ i - 1 ] = 'C';
      for ( int j = i;
      str [ j ] != '';
      j ++ ) str [ j ] = str [ j + 1 ];
    }
  }
  return;
}