int countkDist ( string str1 , int k ) {
  int n = str1 . length ( ) ;
  int res = 0 ;
  int cnt [ 27 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    int dist_count = 0 ;
    cnt [ i ] = 0 ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      if ( ( cnt [ ( char ) str1 [ j ] - 97 ] == 0 ) && ( cnt [ ( char ) str1 [ j ] - 97 ] == k ) ) dist_count ++ ;
      cnt [ ( char ) str1 [ j ] - 97 ] ++ ;
      if ( ( dist_count == k ) || ( dist_count > k ) ) break ;
    }
  }
  return res ;
}
