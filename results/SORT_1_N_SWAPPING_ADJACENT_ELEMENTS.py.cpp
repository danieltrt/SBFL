bool sortedAfterSwap ( string A , string B , int n ) {
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( ( B [ i ] == 1 ) || ( B [ i ] == 2 ) ) {
      int j = i ;
      while ( ( B [ j ] == 1 ) || ( B [ j ] == 2 ) ) j = j + 1 ;
      A = A . substr ( 0 , i ) + std :: string ( A . substr ( i , j + 1 ) ) + A . substr ( j + 1 ) ;
      i = j ;
    }
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( A [ i ] != i + 1 ) || ( A [ i ] == i + 1 ) ) return false ;
  }
  return true ;
}
