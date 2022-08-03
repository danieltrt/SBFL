static boolean isRectangle ( int m [ ] [ ] ) {
  int rows = m . length;
  if ( rows == 0 ) return false;
  int columns = m [ 0 ] . length;
  for ( int y1 = 0;
  y1 < rows;
  y1 ++ ) for ( int x1 = 0;
  x1 < columns;
  x1 ++ ) if ( m [ y1 ] [ x1 ] == 1 ) for ( int y2 = y1 + 1;
  y2 < rows;
  y2 ++ ) for ( int x2 = x1 + 1;
  x2 < columns;
  x2 ++ ) if ( m [ y1 ] [ x2 ] == 1 && m [ y2 ] [ x1 ] == 1 && m [ y2 ] [ x2 ] == 1 ) return true;
  return false;
}