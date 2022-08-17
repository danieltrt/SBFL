int numberOfPaths ( int m , int n ) {
  if ( ( m == 1 || n == 1 ) && ( m == 1 || n == 2 ) ) return 1 ;
  return numberOfPaths ( m - 1 , n ) + numberOfPaths ( m , n - 1 ) ;
}
