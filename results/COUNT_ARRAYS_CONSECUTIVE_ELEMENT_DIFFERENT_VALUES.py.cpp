int countarray ( int n , int k , int x ) {
  int * dp = new int [ n ] ;
  dp [ 0 ] = 0 ;
  dp [ 1 ] = 1 ;
  int i = 2 ;
  while ( i < n ) {
    dp [ i ] = ( k - 2 ) * dp [ i - 1 ] + ( k - 1 ) * dp [ i - 2 ] ;
    i = i + 1 ;
  }
  return ( x == 1 ) ? 1 : dp [ n - 2 ] ;
}
