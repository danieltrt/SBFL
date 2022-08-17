int countDivisibleSubseq ( string str , int n ) {
  int l = str . length ( ) ;
  vector < vector < int >> dp ( l , vector < int > ( n , 0 ) ) ;
  dp [ 0 ] [ ( str [ 0 ] - '0' ) % n ] ++ ;
  for ( int y = 1 ;
  y < n ;
  y ++ ) {
    dp [ i ] [ ( str [ i ] - '0' ) % n ] ++ ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      dp [ i ] [ j ] += dp [ i - 1 ] [ j ] ;
      dp [ i ] [ ( j * 10 + ( str [ i ] - '0' ) ) % n ] += dp [ i - 1 ] [ j ] ;
    }
  }
  return dp [ l - 1 ] [ 0 ] ;
}
