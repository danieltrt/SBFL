int f_filled ( int n , int r , int p ) {
  int C [ r + 1 ] ;
  memset ( C , 0 , sizeof ( C ) ) ;
  C [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = min ( i , r ) ;
    j > 0 ;
    j -- ) {
      C [ j ] = ( C [ j ] + C [ j - 1 ] ) % p ;
    }
  }
  return C [ r ] ;
}
