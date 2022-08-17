bool f_filled ( int arr1 [ ] , int arr2 [ ] , int m , int n ) {
  int i = 0 ;
  int j = 0 ;
  if ( m < n ) return 0 ;
  sort ( arr1 , arr1 + m ) ;
  sort ( arr2 , arr2 + n ) ;
  while ( i < n && j < m ) {
    if ( arr1 [ j ] < arr2 [ i ] ) j ++ ;
    else if ( arr1 [ j ] == arr2 [ i ] ) {
      j ++ ;
      i ++ ;
    }
    else if ( arr1 [ j ] > arr2 [ i ] ) return 0 ;
  }
  return i < n ? false : true ;
}
