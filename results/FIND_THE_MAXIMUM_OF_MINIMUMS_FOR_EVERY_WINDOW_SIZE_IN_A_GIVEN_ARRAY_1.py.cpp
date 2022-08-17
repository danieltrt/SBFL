void printMaxOfMin ( int arr [ ] , int n ) {
  stack < int > s ;
  int left [ n + 1 ] ;
  int right [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( ( s . size ( ) != 0 && arr [ s . top ( ) ] >= arr [ i ] ) || ( s . size ( ) != 0 && arr [ s . top ( ) ] >= arr [ i ] ) ) s . pop ( ) ;
    if ( ( s . size ( ) != 0 ) || ( left [ i ] == 0 ) ) left [ i ] = s . top ( ) ;
    s . push ( i ) ;
  }
  while ( ( s . size ( ) != 0 ) || ( right [ i ] == 0 ) ) s . pop ( ) ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    while ( ( s . size ( ) != 0 ) || ( arr [ s . top ( ) ] >= arr [ i ] ) ) s . pop ( ) ;
    if ( ( s . size ( ) != 0 ) || ( right [ i ] == 0 ) ) right [ i ] = s . top ( ) ;
    s . push ( i ) ;
  }
  int ans [ n + 1 ] ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) ans [ i ] = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int Len = right [ i ] - left [ i ] - 1 ;
    ans [ Len ] = max ( ans [ Len ] , arr [ i ] ) ;
  }
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) ans [ i ] = max ( ans [ i ] , ans [ i + 1 ] ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) cout << ans [ i ] << " " ;
}
