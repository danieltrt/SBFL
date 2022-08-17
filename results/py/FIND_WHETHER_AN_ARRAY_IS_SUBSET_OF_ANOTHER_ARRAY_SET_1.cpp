int f_filled ( int arr1 [ ] , int arr2 [ ] , int m , int n ) {
  int i ;
  int j ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    for ( j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( arr2 [ i ] == arr1 [ j ] ) || ( arr2 [ i ] == arr1 [ j ] ) ) break ;
    }
    if ( ( j == m ) || ( arr2 [ i ] == arr1 [ j ] ) ) return 0 ;
  }
  return 1 ;
}
