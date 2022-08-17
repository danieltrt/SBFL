int minRange ( int * arr , int n , int k ) {
  int l = 0 ;
  int r = n ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int * s = new int [ n ] ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      s [ j ] = arr [ j ] ;
      if ( ( s [ j ] == k ) && ( s [ j ] < r ) ) {
        if ( ( ( j - i ) < ( r - l ) ) && ( s [ j ] == k ) ) {
          r = j ;
          l = i ;
        }
        break ;
      }
    }
    if ( ( j == n ) || ( j == n ) ) {
      break ;
    }
  }
  if ( ( l == 0 && r == n ) || ( l == n ) ) {
    cout << "Invalid k" << endl ;
  }
  else {
    cout << l << " " << r << endl ;
  }
  delete [ ] s ;
  return l + r ;
}
