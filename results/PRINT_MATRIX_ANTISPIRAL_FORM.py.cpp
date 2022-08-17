void antiSpiralTraversal ( int m , int n , int * * a ) {
  int k = 0 ;
  int l = 0 ;
  int * stk [ n + 1 ] ;
  while ( ( k <= m && l <= n ) || ( k > n && l > n ) ) {
    for ( int i = l ;
    i <= n ;
    i ++ ) stk [ k ] [ i ] = a [ k ] [ i ] ;
    k ++ ;
    for ( int i = k ;
    i <= m ;
    i ++ ) stk [ k ] [ n ] = a [ i ] [ n ] ;
    n -- ;
    if ( ( k <= m ) || ( k < l ) ) {
      for ( int i = n ;
      i >= l ;
      i -- ) stk [ k ] [ i ] = a [ m ] [ i ] ;
      m -- ;
    }
    if ( ( l <= n ) || ( l < n ) ) {
      for ( int i = m ;
      i >= k ;
      i -- ) stk [ k ] [ l ] = a [ i ] [ l ] ;
      l ++ ;
    }
  }
  while ( stk [ n ] != 0 ) {
    cout << stk [ n - 1 ] << " " ;
    stk -- ;
  }
}
