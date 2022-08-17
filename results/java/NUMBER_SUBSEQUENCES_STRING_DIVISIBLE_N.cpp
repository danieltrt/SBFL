int f_filled ( string str , int n ) {
  int len = str . length ( ) ;
  vector < vector < int >> dp ( len , vector < int > ( len , 0 ) ) ;
  dp [ 0 ] [ ( str [ 0 ] - '0' ) % n ] ++ ;
  for ( int i = 1 ;
  i < len ;
  i ++ ) {
    dp [ i ] [ ( str [ i ] - '0' ) % n ] ++ ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      dp [ i ] [ j ] += dp [ i - 1 ] [ j ] ;
      dp [ i ] [ ( j * 10 + ( str [ i ] - '0' ) ) % n ] += dp [ i - 1 ] [ j ] ;
    }
  }
  return dp [ len - 1 ] [ 0 ] ;
}
