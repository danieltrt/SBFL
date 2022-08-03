static void interchangeFirstLast ( int m [ ] [ ] ) {
  int rows = m . length;
  for ( int i = 0;
  i < m [ 0 ] . length;
  i ++ ) {
    int t = m [ 0 ] [ i ];
    m [ 0 ] [ i ] = m [ rows - 1 ] [ i ];
    m [ rows - 1 ] [ i ] = t;
  }
}