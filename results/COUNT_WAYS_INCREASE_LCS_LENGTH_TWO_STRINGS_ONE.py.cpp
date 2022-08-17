int waysToIncreaseLCSBy1 ( string str1 , string str2 ) {
  int m = str1 . length ( ) ;
  int n = str2 . length ( ) ;
  vector < vector < int >> position ( M , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 1 ;
  i <= n ;
  i += 1 ) position [ ( int ) ( i - 1 ) - 97 ] . push_back ( i ) ;
  vector < vector < int >> lcsl ( n + 2 , vector < int > ( m + 2 , 0 ) ) ;
  vector < vector < int >> lcsr ( n + 2 , vector < int > ( m + 2 , 0 ) ) ;
  for ( int i = 1 ;
  i <= m ;
  i += 1 ) {
    for ( int j = 1 ;
    j <= n ;
    j += 1 ) {
      if ( ( str1 [ i - 1 ] == str2 [ j - 1 ] ) || ( str1 [ j - 1 ] == str2 [ j - 1 ] ) ) lcsl [ i ] [ j ] = 1 + lcsl [ i - 1 ] [ j - 1 ] ;
      else lcsl [ i ] [ j ] = max ( lcsl [ i - 1 ] [ j ] , lcsl [ i ] [ j - 1 ] ) ;
    }
  }
  for ( int i = m ;
  i > 0 ;
  i -- ) {
    for ( int j = n ;
    j > 0 ;
    j -- ) {
      if ( ( str1 [ i - 1 ] == str2 [ j - 1 ] ) || ( str1 [ j - 1 ] == str2 [ j + 1 ] ) ) lcsr [ i ] [ j ] = 1 + lcsr [ i + 1 ] [ j + 1 ] ;
      else lcsr [ i ] [ j ] = max ( lcsr [ i + 1 ] [ j ] , lcsr [ i ] [ j + 1 ] ) ;
    }
  }
  int ways = 0 ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( int C = 0 ;
    C <= 26 ;
    C ++ ) {
      for ( int j = 0 ;
      j < position [ C ] . size ( ) ;
      j ++ ) {
        int p = position [ C ] [ j ] ;
        if ( ( lcsl [ i ] [ p - 1 ] + lcsr [ i + 1 ] [ p + 1 ] == lcsl [ m ] [ n ] ) ) ways ++