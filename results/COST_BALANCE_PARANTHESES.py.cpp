int costToBalance ( string s ) {
  if ( ( s . length ( ) == 0 ) || ( s . length ( ) == 1 ) ) cout << 0 << endl ;
  int ans = 0 ;
  int o = 0 ;
  int c = 0 ;
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    if ( ( s [ i ] == '(' ) || ( s [ i ] == ')' ) ) o ++ ;
    if ( ( s [ i ] == '(' ) || ( s [ i ] == ')' ) ) c ++ ;
  }
  if ( ( o != c ) && ( o < c ) ) return - 1 ;
  int a [ s . length ( ) ] ;
  if ( ( s [ 0 ] == '(' ) || ( s [ 0 ] == ')' ) ) a [ 0 ] = 1 ;
  else a [ 0 ] = - 1 ;
  if ( ( a [ 0 ] < 0 ) || ( a [ 0 ] > 0 ) ) ans += abs ( a [ 0 ] ) ;
  for ( int i = 1 ;
  i < s . length ( ) ;
  i ++ ) {
    if ( ( s [ i ] == '(' ) || ( s [ i ] == ')' ) ) a [ i ] = a [ i - 1 ] + 1 ;
    else a [ i ] = a [ i - 1 ] - 1 ;
    if ( ( a [ i ] < 0 ) || ( a [ i ] > 0 ) ) ans += abs ( a [ i ] ) ;
  }
  return ans ;
}
