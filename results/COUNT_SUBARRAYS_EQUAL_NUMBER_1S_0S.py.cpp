int countSubarrWithEqualZeroAndOne ( int arr [ ] , int n ) {
  map < int , int > um ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    currSum += ( arr [ i ] == 0 ) ? - 1 : arr [ i ] ;
    if ( um . find ( currSum ) != um . end ( ) ) um [ currSum ] ++ ;
    else um [ currSum ] = 1 ;
  }
  int count = 0 ;
  for ( int itr = 0 ;
  itr < um . size ( ) ;
  itr ++ ) {
    if ( um [ itr ] > 1 ) count += ( ( um [ itr ] * ( int ) ( um [ itr ] - 1 ) ) / 2 ) ;
  }
  if ( um . find ( 0 ) != um . end ( ) ) count += um [ 0 ] ;
  return ( int ) count ;
}
