int search ( int arr [ ] , int n , int x ) {
  int i ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] == x ) || ( arr [ i ] == 0 ) ) return i ;
  }
  return - 1 ;
}
