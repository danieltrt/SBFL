void printDistSum ( int arr [ ] , int n ) {
  int Sum = sizeof ( arr ) / sizeof ( int ) ;
  bool dp [ Sum + 1 ] [ n + 1 ] ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) dp [ i ] [ 0 ] = true ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    dp [ i ] [ arr [ i - 1 ] ] = true ;
    for ( int j = 1 ;
    j <= Sum ;
    j ++ ) {
      if ( ( dp [ i - 1 ] [ j ] == true ) == true ) {
        dp [ i ] [ j ] = true ;
        dp [ i ] [ j + arr [ i - 1 ] ] = true ;
      }
    }
  }
  for ( int j = 0 ;
  j < Sum + 1 ;
  j ++ ) {
    if ( ( dp [ n ] [ j ] == true ) == true ) cout << j << " " ;
  }
}
