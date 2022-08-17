int returnMaxSum ( int A [ ] , int B [ ] , int n ) {
  set < int > mp ;
  int result = 0 ;
  int currSum = 0 , currBegin = 0 ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    while ( mp . find ( A [ i ] ) != mp . end ( ) ) {
      mp . erase ( A [ currBegin ] ) ;
      currSum -= B [ currBegin ] ;
      currBegin ++ ;
    }
    mp . insert ( A [ i ] ) ;
    currSum += B [ i ] ;
    result = max ( result , currSum ) ;
  }
  return result ;
}
