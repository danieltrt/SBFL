int maxLen ( int arr [ ] ) {
  unordered_map < int , int > hashMap ;
  int maxLen = 0 ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i ++ ) {
    currSum += arr [ i ] ;
    if ( arr [ i ] == 0 && maxLen == 0 ) maxLen = 1 ;
    if ( currSum == 0 ) maxLen = i + 1 ;
    if ( currSum < hashMap . size ( ) ) maxLen = max ( maxLen , i - hashMap [ currSum ] ) ;
    else hashMap [ currSum ] = i ;
  }
  return maxLen ;
}
