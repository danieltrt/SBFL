int findLength ( string string ) {
  int n = string . length ( ) ;
  int maxlen = 0 ;
  vector < vector < int >> Sum ( n , vector < int > ( n , 0 ) ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) Sum [ i ] [ i ] = atoi ( string . c_str ( ) ) ;
  for ( int length = 2 ;
  length <= n ;
  length ++ ) {
    for ( int i = 0 ;
    i <= n - length + 1 ;
    i ++ ) {
      int j = i + length - 1 ;
      int k = length / 2 ;
      Sum [ i ] [ j ] = ( Sum [ i ] [ j - k ] + Sum [ j - k + 1 ] [ j ] ) ;
      if ( ( length % 2 == 0 && andSum [ i ] [ j - k ] == Sum [ ( j - k + 1 ) ] [ j ] && andlength > maxlen ) maxlen = length ;
    }
  }
  return returnmaxlen ;
}
