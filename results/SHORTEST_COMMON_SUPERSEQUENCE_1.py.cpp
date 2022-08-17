int superSeq ( string X , string Y , int m , int n ) {
  vector < vector < int >> dp ( n + 2 , vector < int > ( m + 2 , 0 ) ) ;
  for ( int i = 0 ;
  i < m + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n + 1 ;
    j ++ ) {
      if ( ( ! i ) && ( ! j ) ) {
        dp [ i ] [ j ] = j ;
      }
      else if ( ( X [ i - 1 ] == Y [ j - 1 ] ) || ( X [ i - 1 ] == Y [ j - 1 ] ) ) {
        dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ] ;
      }
      else {
        dp [ i ] [ j ] = 1 + min ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) ;
      }
    }
  }
  return dp [ m ] [ n ] ;
}
