void findRandomIndexOfMax ( int arr [ ] , int n ) {
  unordered_map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( mp . find ( arr [ i ] ) != mp . end ( ) ) mp [ arr [ i ] ] = mp [ arr [ i ] ] + 1 ;
  else mp [ arr [ i ] ] = 1 ;
  int maxElement = INT_MAX ;
  int maxSo_far = INT_MAX ;
  for ( unordered_map < int , int > :: iterator p = mp . begin ( ) ;
  p != mp . end ( ) ;
  p ++ ) {
    if ( p -> second > maxSo_far ) {
      maxSo_far = p -> second ;
      maxElement = p -> first ;
    }
  }
  int r = ( int ) ( ( rand ( ) % maxSo_far ) + 1 ) ;
  for ( int i = 0 , count = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == maxElement ) count ++ ;
    if ( count == r ) {
      cout << "Element with maximum frequency present " << "at index " << i << "\n" ;
      break ;
    }
  }
}
