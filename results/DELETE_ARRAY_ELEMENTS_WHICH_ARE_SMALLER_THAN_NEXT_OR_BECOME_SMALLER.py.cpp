void deleteElements ( int arr [ ] , int n , int k ) {
  int st [ n ] ;
  st [ 0 ] = arr [ 0 ] ;
  int top = 0 ;
  int count = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    while ( ( st [ top ] != 0 ) && count < k && st [ top ] < arr [ i ] ) {
      st [ top ] -- ;
      count ++ ;
      top -- ;
    }
    st [ top ] = arr [ i ] ;
    top ++ ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) cout << st [ i ] << " " << endl ;
}
