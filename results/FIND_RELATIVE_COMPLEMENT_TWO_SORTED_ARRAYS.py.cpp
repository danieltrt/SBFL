int relativeComplement ( int arr1 [ ] , int arr2 [ ] , int n , int m ) {
  int i = 0 ;
  int j = 0 ;
  while ( ( i < n ) && ( j < m ) ) {
    if ( ( arr1 [ i ] < arr2 [ j ] ) || ( arr1 [ i ] > arr2 [ j ] ) ) {
      cout << arr1 [ i ] << " " << " " ;
      i ++ ;
    }
    else if ( ( arr1 [ i ] > arr2 [ j ] ) || ( arr1 [ i ] == arr2 [ j ] ) ) {
      j ++ ;
    }
  }
  while ( ( i < n ) && ( j < m ) ) {
    cout << arr1 [ i ] << " " << " " ;
    j ++ ;
  }
  return i ;
}
