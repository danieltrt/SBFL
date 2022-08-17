int f_filled ( int * arr , int n , int k ) {
  int sum [ n + 1 ] ;
  sum [ 0 ] = 0 ;
  sum [ 1 ] = arr [ 0 ] ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) sum [ i - 1 ] = sum [ i - 1 ] + arr [ i - 1 ] ;
  int * Q = new int [ n + 1 ] ;
  int * heapQ = new int [ n + 1 ] ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = i ;
    j <= n ;
    j ++ ) {
      int x = sum [ j ] - sum [ i - 1 ] ;
      if ( Q [ 0 ] < x ) heapQ [ 0 ] = x ;
      else {
        if ( heapQ [ 0 ] < x ) {
          heapQ [ 0 ] = x ;
          heapQ [ 0 ] = x ;
        }
      }
    }
  }
  delete [ ] heapQ ;
  return Q [ 0 ] ;
}
