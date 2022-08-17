int f_filled ( int arr [ ] , int n ) {
  map < int , int > um ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    currSum += ( arr [ i ] == 0 ) ? - 1 : arr [ i ] ;
    um [ currSum ] = um [ currSum ] == 0 ? 1 : um [ currSum ] + 1 ;
  }
  int count = 0 ;
  for ( map < int , int > :: iterator itr = um . begin ( ) ;
  itr != um . end ( ) ;
  itr ++ ) {
    if ( itr -> second > 1 ) {
      count += ( ( itr -> second * ( itr -> second - 1 ) ) / 2 ) ;
    }
  }
  if ( um . find ( 0 ) != um . end ( ) ) {
    count += um . find ( 0 ) -> second ;
  }
  return count ;
}
