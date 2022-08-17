int solve ( int A [ ] , int B [ ] , int C [ ] ) {
  int i = sizeof ( A ) / sizeof ( A [ 0 ] ) - 1 ;
  int j = sizeof ( B ) / sizeof ( B [ 0 ] ) - 1 ;
  int k = sizeof ( C ) / sizeof ( C [ 0 ] ) - 1 ;
  int minDiff = abs ( max ( A [ i ] , B [ j ] , C [ k ] ) - min ( A [ i ] , B [ j ] , C [ k ] ) ) ;
  while ( i != - 1 && j != - 1 && k != - 1 ) {
    int currentDiff = abs ( max ( A [ i ] , B [ j ] , C [ k ] ) - min ( A [ i ] , B [ j ] , C [ k ] ) ) ;
    if ( currentDiff < minDiff ) minDiff = currentDiff ;
    int maxTerm = max ( A [ i ] , B [ j ] , C [ k ] ) ;
    if ( A [ i ] == maxTerm ) i -- ;
    else if ( B [ j ] == maxTerm ) j -- ;
    else k -- ;
  }
  return minDiff ;
}
