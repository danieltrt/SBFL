int find ( int n , int k ) {
  if ( ( n + 1 >= k ) && ( k + 1 >= n ) ) return ( k - 1 ) ;
  else return ( 2 * n + 1 - k ) ;
}
