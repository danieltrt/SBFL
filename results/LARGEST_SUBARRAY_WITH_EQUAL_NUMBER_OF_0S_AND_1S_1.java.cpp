int maxLen ( int arr [ ] , int n ) {
  unordered_map < int , int > hM ;
  int sum = 0 ;
  int maxLen = 0 ;
  int endingIndex = - 1 ;
  int startIndex = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = ( arr [ i ] == 0 ) ? - 1 : 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum += arr [ i ] ;
    if ( sum == 0 ) {
      maxLen = i + 1 ;
      endingIndex = i ;
    }
    if ( hM . find ( sum + n ) != hM . end ( ) ) {
      if ( maxLen < i - hM [ sum + n ] ) {
        maxLen = i - hM [ sum + n ] ;
        endingIndex = i ;
      }
    }
    else hM [ sum + n ] = i ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = ( arr [ i ] == - 1 ) ? 0 : 1 ;
  int end = endingIndex - maxLen + 1 ;
  cout << end << " to " << endingIndex << endl ;
  return maxLen ;
}
