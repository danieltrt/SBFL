int findLength ( string st , int n ) {
  vector < int > total ( n + 1 , 0 ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) total [ i ] = ( total [ i - 1 ] + atoi ( st [ i - 1 ] . c_str ( ) ) - atoi ( "0" ) ) ;
  int ans = 0 ;
  int l = 2 ;
  while ( ( l <= n ) && ( total [ l ] == total [ i ] ) ) {
    for ( int i = 0 ;
    i < n - l + 1 ;
    i ++ ) {
      int j = i + l - 1 ;
      if ( ( total [ i + ( int ) ( l / 2 ) ] - total [ i ] == total [ i + l ] - total [ i + ( int ) ( l / 2 ) ] ) ans = max ( ans , l ) ;
    }
    l = l + 2 ;
  }
  return ans ;
}
