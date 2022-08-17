int findLength ( string string , int n ) {
  int Sum [ n + 1 ] ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) Sum [ i ] = ( Sum [ i - 1 ] + atoi ( string [ i - 1 ] . c_str ( ) ) ) ;
  int ans = 0 ;
  for ( int length = 2 ;
  length <= n ;
  length += 2 ) {
    for ( int i = 0 ;
    i <= n - length + 1 ;
    i ++ ) {
      int j = i + length - 1 ;
      if ( ( Sum [ i + length / 2 ] - Sum [ i ] == Sum [ i + length ] - Sum [ i + length / 2 ] ) ) ans = max ( ans , length ) ;
    }
  }
  return ans ;
}
