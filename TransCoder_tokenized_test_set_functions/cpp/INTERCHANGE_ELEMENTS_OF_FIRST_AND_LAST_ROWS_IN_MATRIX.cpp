void interchangeFirstLast ( int m [ ] [ n ] ) {
  int rows = n;
  for ( int i = 0;
  i < n;
  i ++ ) {
    int t = m [ 0 ] [ i ];
    m [ 0 ] [ i ] = m [ rows - 1 ] [ i ];
    m [ rows - 1 ] [ i ] = t;
  }
}