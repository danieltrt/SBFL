bool findPairs ( int arr [ ] ) {
  unordered_map < int , pair > map ;
  int n = sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    for ( int j = i + 1 ;
    j < n ;
    ++ j ) {
      int sum = arr [ i ] + arr [ j ] ;
      if ( ! map . count ( sum ) ) {
        map [ sum ] = make_pair ( i , j ) ;
      }
      else {
        pair p = map [ sum ] ;
        cout << "(" << arr [ p . first ] << ", " << arr [ p . second ] << ") and (" << arr [ i ] << ", " << arr [ j ] << ")" << endl ;
        return true ;
      }
    }
  }
  return false ;
}
