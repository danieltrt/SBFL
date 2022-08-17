bool ifPossible ( int * arr , int n ) {
  int * cp ;
  cp = arr ;
  sort ( cp , arr + n ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( ! ( arr [ i ] == cp [ i ] ) && ! ( arr [ n - 1 - i ] == cp [ i ] ) ) || ( ! ( arr [ n - 1 - i ] == cp [ i ] ) && ! ( arr [ n - 1 - i ] == cp [ i ] ) ) ) return false ;
  }
  return true ;
}
