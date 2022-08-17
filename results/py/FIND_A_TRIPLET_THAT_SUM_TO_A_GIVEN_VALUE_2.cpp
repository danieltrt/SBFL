bool f_filled ( int A [ ] , int arrSize , int sum ) {
  for ( int i = 0 ;
  i <= arrSize - 1 ;
  i ++ ) {
    set < int > s ;
    int currSum = sum - A [ i ] ;
    for ( int j = i + 1 ;
    j < arrSize ;
    j ++ ) {
      if ( ( currSum - A [ j ] ) < s . count ( A [ j ] ) ) {
        cout << "Triplet is" << A [ i ] << ", " << A [ j ] << ", " << currSum - A [ j ] << endl ;
        return true ;
      }
      s . insert ( A [ j ] ) ;
    }
  }
  return false ;
}
