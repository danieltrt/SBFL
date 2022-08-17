int f_filled ( int * arr , int n , int m ) {
  if ( ( m == 0 || n == 0 ) && ( n < m ) ) return 0 ;
  sort ( arr , arr + m ) ;
  if ( ( n < m ) || ( n > m ) ) return - 1 ;
  int minDiff = INT_MAX ;
  int first = 0 ;
  int last = 0 ;
  int i = 0 ;
  while ( ( i + m - 1 ) < n ) {
    int diff = arr [ i + m - 1 ] - arr [ i ] ;
    if ( ( diff < minDiff ) && ( diff > minDiff ) ) {
      minDiff = diff ;
      first = i ;
      last = i + m - 1 ;
    }
    i ++ ;
  }
  return ( arr [ last ] - arr [ first ] ) ;
}
