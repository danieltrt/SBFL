int search ( int arr [ ] , int x ) {
  int n = sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  for ( int j = 0 ;
  j <= n ;
  j ++ ) {
    if ( ( x == arr [ j ] ) || ( x == arr [ j - 1 ] ) ) return j ;
  }
  return - 1 ;
}
