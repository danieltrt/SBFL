int constructTree ( int n , int d , int h ) {
  if ( d == 1 ) {
    if ( n == 2 && h == 1 ) {
      cout << "1 2" << endl ;
      return 0 ;
    }
    cout << "-1" << endl ;
    return 0 ;
  }
  if ( d > 2 * h ) {
    cout << "-1" << endl ;
    return 0 ;
  }
  for ( int i = 1 ;
  i <= h ;
  i ++ ) cout << i << " " << i + 1 ;
  if ( d > h ) {
    cout << 1 << "  " << h + 2 ;
    for ( int i = h + 2 ;
    i <= d ;
    i ++ ) cout << i << " " << i + 1 ;
  }
  for ( int i = d + 1 ;
  i <= n ;
  i ++ ) {
    int k = 1 ;
    if ( d == h ) k = 2 ;
    cout << k << " " << i + 1 ;
  }
  return 0 ;
}
