int countWays ( string s ) {
  int count [ 26 ] ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) count [ i ] = ( count [ i ] - 'a' ) + 1 ;
  count [ s [ 0 ] - 'a' ] = 1 ;
  int ans = 1 ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) if ( ( count [ i ] != 0 ) ) ans *= count [ i ] ;
  return ans ;
}
