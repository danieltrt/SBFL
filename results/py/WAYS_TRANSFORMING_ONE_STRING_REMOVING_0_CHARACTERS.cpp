int f_filled ( string a , string b ) {
  int n = a . length ( ) ;
  int m = b . length ( ) ;
  if ( m == 0 ) return 1 ;
  vector < vector < int >> dp ( m + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = i ;
    j < n ;
    j ++ ) {
      if ( i == 0 ) {
        if ( j == 0 ) {
          if ( a [ j ] == b [ i ] ) dp [ i ] [ j ] = 1 ;
          else dp [ i ] [ j ] = 0 ;
        }
        else if ( a [ j ] == b [ i ] ) dp [ i ] [ j ] = dp [ i ] [ j - 1 ] + 1 ;
        else dp [ i ] [ j ] = dp [ i ] [ j - 1 ] ;
      }
      else {
        if ( a [ j ] == b [ i ] ) dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i - 1 ] [ j - 1 ] ) ;
        else dp [ i ] [ j ] = dp [ i ] [ j - 1 ] ;
      }
    }
  }
  return dp [ m - 1 ] [ n - 1 ] ;
}
