int minCells ( int * * mat , int m , int n ) {
  int * * dp = new int * [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) dp [ i ] = new int [ m ] ;
  dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( dp [ i ] [ j ] != MAX && ( j + mat [ i ] [ j ] ) < n && ( dp [ i ] [ j ] + 1 ) < dp [ i ] [ j + mat [ i ] [ j ] ] ) dp [ i ] [ j + mat [ i ] [ j ] ] = dp [ i ] [ j ] + 1 ;
      if ( ( dp [ i ] [ j ] != MAX && ( i + mat [ i ] [ j ] ) < m && ( dp [ i ] [ j ] + 1 ) < dp [ i + mat [ i ] [ j ] ] ) dp [ i + mat [ i ] [ j ] ] = dp [ i ] [ j ] + 1 ;
    }
  }
  if ( ( dp [ m - 1 ] [ n - 1 ] != MAX ) ) return dp [ m - 1 ] [ n - 1 ] ;
  return - 1 ;
}
