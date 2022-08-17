bool findPairs ( int arr [ ] , int n ) {
  unordered_map < int , int > Hash ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int sum = arr [ i ] + arr [ j ] ;
      if ( sum < Hash . size ( ) ) {
        int prev = Hash . find ( sum ) ;
        cout << prev << " and (" << arr [ i ] << ", " << arr [ j ] << ")" << endl ;
        return true ;
      }
      else Hash [ sum ] = ( arr [ i ] ) ;
    }
  }
  return false ;
}
