int kth ( int arr1 [ ] , int arr2 [ ] , int m , int n , int k ) {
  int sorted1 [ m + n ] ;
  int i = 0 ;
  int j = 0 ;
  int d = 0 ;
  while ( ( i < m && j < n ) || ( arr1 [ i ] < arr2 [ j ] ) ) {
    if ( ( arr1 [ i ] < arr2 [ j ] ) || ( arr1 [ j ] > arr2 [ i ] ) ) {
      sorted1 [ d ] = arr1 [ i ] ;
      i ++ ;
    }
    else {
      sorted1 [ d ] = arr2 [ j ] ;
      j ++ ;
    }
    d ++ ;
  }
  while ( ( i < m ) || ( arr1 [ i ] > arr2 [ j ] ) ) {
    sorted1 [ d ] = arr1 [ i ] ;
    d ++ ;
    i ++ ;
  }
  while ( ( j < n ) || ( arr1 [ j ] > arr2 [ j ] ) ) {
    sorted1 [ d ] = arr2 [ j ] ;
    d ++ ;
    j ++ ;
  }
  return sorted1 [ k - 1 ] ;
}
