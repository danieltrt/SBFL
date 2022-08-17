int maxLen ( int arr [ ] ) {
  unordered_map < int , int > hM ;
  int sum = 0 ;
  int maxLen = 0 ;
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i ++ ) {
    sum += arr [ i ] ;
    if ( arr [ i ] == 0 && maxLen == 0 ) maxLen = 1 ;
    if ( sum == 0 ) maxLen = i + 1 ;
    int prevI = hM . find ( sum ) ;
    if ( prevI != hM . end ( ) ) maxLen = max ( maxLen , i - prevI ) ;
    else hM [ sum ] = i ;
  }
  return maxLen ;
}
