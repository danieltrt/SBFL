int waysToIncreaseLCSBy1 ( string str1 , string str2 ) {
  int m = str1 . length ( ) , n = str2 . length ( ) ;
  vector < vector < int >> position ( M , vector < int > ( M , 0 ) ) ;
  for ( int i = 0 ;
  i < M ;
  i ++ ) {
    position [ i ] . clear ( ) ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    position [ str2 [ i - 1 ] - 'a' ] . push_back ( i ) ;
  }
  vector < vector < int >> lcsl ( m + 2 , vector < int > ( n + 2 , 0 ) ) ;
  vector < vector < int >> lcsr ( m + 2 , vector < int > ( n + 2 , 0 ) ) ;
  for ( int i = 0 ;
  i <= m + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n + 1 ;
    j ++ ) {
      lcsl [ i ] [ j ] = lcsr [ i ] [ j ] = 0 ;
    }
  }
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    for ( char d = 0 ;
    d < 26 ;
    d ++ ) {
      for ( int j = 0 ;
      j < position [ d ] . size ( ) ;
      j ++ ) {
        int p = position [ d ] [ j ] ;
        if ( lcsl [ i ] [ j ] == lcsr [ d ] [ j ] ) {
          lcsl [ i ] [ j ] = 1 + lcsl [ i ] [ j ] ;
        }
        else {
          lcsl [ i ] [ j ] = max ( lcsl [ i ] [ j ] , lcsr [ d ] [ j ] ) ;
        }
      }
    }
  }
  int ways = 0 ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( char d = 0 ;
    d < 26 ;
    d ++ ) {
      for ( int j = 0 ;
      j < position [ d ] . size ( ) ;
      j ++ ) {
        int p = position [ d ] [ j ] ;
        if ( lcsl [ i ] [ j ] == lcsr [ d ] [ j ] ) {
          ways ++ ;
        }
        else {
          lcsl [ i ] [ j ] = max ( lcsl [ i ] [ j ] , lcsr [ d ] [ j ] ) ;
        }
      }
    }
  }
  return ways ;
}
