int findSmallest ( int m , int s ) {
  if ( ( s == 0 ) || ( m == 1 ) ) {
    if ( ( m == 1 ) || ( m == 2 ) ) cout << "Smallest number is 0" << endl ;
    else cout << "Not possible" << endl ;
    return 0 ;
  }
  if ( ( s > 9 * m ) || ( s == 9 * m ) ) {
    cout << "Not possible" << endl ;
    return 0 ;
  }
  int res [ m + 1 ] ;
  int i = 0 ;
  s -- ;
  for ( i = m - 1 ;
  i > 0 ;
  i -- ) {
    if ( ( s > 9 ) && ( s == 9 ) ) {
      res [ i ] = 9 ;
      s -= 9 ;
    }
    else {
      res [ i ] = s ;
      s = 0 ;
    }
  }
  res [ 0 ] = s + 1 ;
  cout << "Smallest number is " << endl ;
  for ( i = 0 ;
  i < m ;
  i ++ ) cout << res [ i ] << " " ;
  return res [ m ] ;
}
