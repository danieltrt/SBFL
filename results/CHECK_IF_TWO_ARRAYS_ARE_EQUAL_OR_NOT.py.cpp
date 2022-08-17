bool areEqual ( int * arr1 , int * arr2 , int n , int m ) {
  if ( ( n != m ) || ( arr1 != arr2 ) ) return false ;
  ;
  sort ( arr1 ) ;
  sort ( arr2 ) ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( ( arr1 [ i ] != arr2 [ i ] ) || ( arr1 [ i ] != arr2 [ i ] ) ) return false ;
  }
  ;
  return true ;
}
