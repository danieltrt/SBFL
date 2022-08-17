void printInSortedOrder ( int * arr , int n ) {
  int index [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) index [ i ] = i ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    int min = i ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( ( arr [ index [ min ] ] > arr [ index [ j ] ] ) && ( arr [ index [ j ] ] < arr [ min ] ) ) min = j ;
    }
    if ( ( min != i ) || ( index [ i ] > i ) ) index [ min ] = index [ i ] ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) cout << arr [ index [ i ] ] << " " ;
}
