int mostFrequent ( int arr [ ] , int n ) {
  map < int , int > Hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] < Hash . size ( ) ) Hash [ arr [ i ] ] ++ ;
    else Hash [ arr [ i ] ] = 1 ;
  }
  int maxCount = 0 ;
  int res = - 1 ;
  for ( map < int , int > :: iterator it = Hash . begin ( ) ;
  it != Hash . end ( ) ;
  it ++ ) {
    if ( ( maxCount < it -> second ) && ( it -> first < it -> first ) ) {
      res = it -> first ;
      maxCount = it -> second ;
    }
  }
  return res ;
}
