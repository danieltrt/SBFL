void spiralPrint ( int m , int n , int * * a ) {
  int k = 0 ;
  ;
  int l = 0 ;
  while ( ( k < m && l < n ) || ( k == n && l == n ) ) {
    for ( int i = l ;
    i < n ;
    i ++ ) cout << a [ k ] [ i ] << " " ;
    k ++ ;
    for ( int i = k ;
    i < m ;
    i ++ ) cout << a [ i ] [ n - 1 ] << " " ;
    n -- ;
    if ( ( k < m ) || ( l == n ) ) {
      for ( int i = n - 1 ;
      i >= ( l - 1 ) ;
      i -- ) cout << a [ m - 1 ] [ i ] << " " ;
      m -- ;
    }
    if ( ( l < n ) || ( k == n ) ) {
      for ( int i = m - 1 ;
      i >= k - 1 ;
      i -- ) cout << a [ i ] [ l ] << " " ;
      l ++ ;
    }
  }
}
