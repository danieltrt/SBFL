bool find3Numbers ( int A [ ] , int arrSize , int sum ) {
  for ( int i = 0 ;
  i <= arrSize - 2 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= arrSize - 1 ;
    j ++ ) {
      for ( int k = j + 1 ;
      k <= arrSize ;
      k ++ ) {
        if ( A [ i ] + A [ j ] + A [ k ] == sum ) {
          cout << "Triplet is" << A [ i ] << ", " << A [ j ] << ", " << A [ k ] << endl ;
          return true ;
        }
      }
    }
  }
  return false ;
}
