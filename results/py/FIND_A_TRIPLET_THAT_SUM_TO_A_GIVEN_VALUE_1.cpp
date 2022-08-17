bool f_filled ( int * A , int arrSize , int sum ) {
  sort ( A , A + arrSize ) ;
  for ( int i = 0 ;
  i <= arrSize - 2 ;
  i ++ ) {
    int l = i + 1 ;
    int r = arrSize - 1 ;
    while ( ( l < r ) && ( A [ i ] + A [ l ] + A [ r ] == sum ) ) {
      cout << "Triplet is" << A [ i ] << ', ' << A [ l ] << ', ' << A [ r ] << endl ;
      return true ;
    }
    else if ( ( A [ i ] + A [ l ] + A [ r ] < sum ) ) {
      l ++ ;
    }
    else {
      r -- ;
    }
  }
  return false ;
}
