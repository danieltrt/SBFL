int f_filled ( int arr [ ] , int n ) {
  int high = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) high = max ( high , arr [ i ] ) ;
  int count [ n + 1 ] ;
  memset ( count , 0 , sizeof ( count ) ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) count [ arr [ i ] ] ++ ;
  int counter = 0 ;
  for ( int i = high ;
  i > 0 ;
  i -- ) {
    int j = i ;
    while ( ( j <= high ) && ( count [ j ] > 0 ) ) {
      if ( ( count [ j ] > 0 ) || ( count [ j ] == 2 ) ) return i ;
    }
    counter = 0 ;
  }
  return 0 ;
}
