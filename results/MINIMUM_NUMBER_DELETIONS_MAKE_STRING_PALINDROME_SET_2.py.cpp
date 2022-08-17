int getLevenstein ( string inpt ) {
  string revInput = inpt . substr ( 0 , inpt . length ( ) - 1 ) ;
  int n = inpt . length ( ) ;
  vector < vector < int >> dp ( n + 1 , vector < int > ( n + 1 , - 1 ) ) ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    dp [ 0 ] [ i ] = i ;
    dp [ i ] [ 0 ] = i ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      if ( inpt [ i - 1 ] == revInput [ j - 1 ] ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] ;
      else dp [ i ] [ j ] = 1 + min ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) ;
    }
  }
  int res = INT_MAX ;
  int i = n , j = 0 ;
  while ( i >= 0 ) {
    res = min ( res , dp [ i ] [ j ] ) ;
    if ( i < n ) res = min ( res , dp [ i + 1 ] [ j ] ) ;
    if ( i > 0 ) res = min ( res , dp [ i - 1 ] [ j ] ) ;
    i -- ;
    j ++ ;
  }
  return res ;
}
