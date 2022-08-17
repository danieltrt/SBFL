int findDiff ( int arr [ ] , int n ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( mp . find ( arr [ i ] ) != mp . end ( ) ) mp [ arr [ i ] ] = mp [ arr [ i ] ] + 1 ;
    else mp [ arr [ i ] ] = 1 ;
  }
  int maxCount = 0 , minCount = n ;
  for ( map < int , int > :: iterator x = mp . begin ( ) ;
  x != mp . end ( ) ;
  x ++ ) {
    maxCount = max ( maxCount , x -> second ) ;
    minCount = min ( minCount , x -> second ) ;
  }
  return ( maxCount - minCount ) ;
}
