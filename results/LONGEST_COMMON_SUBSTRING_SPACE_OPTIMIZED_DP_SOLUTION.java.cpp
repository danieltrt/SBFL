int LCSubStr ( string X , string Y ) {
  int m = X . length ( ) ;
  int n = Y . length ( ) ;
  int result = 0 ;
  vector < vector < int >> vec ( 2 , vector < int > ( n , 0 ) ) ;
  int currRow = 0 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( i == 0 || j == 0 ) vec [ currRow ] [ j ] = 0 ;
      else if ( X [ i - 1 ] == Y [ j - 1 ] ) {
        vec [ currRow ] [ j ] = vec [ ( 1 - currRow ) ] [ ( j - 1 ) ] + 1 ;
        result = max ( result , vec [ currRow ] [ j ] ) ;
      }
      else vec [ currRow ] [ j ] = 0 ;
    }
    currRow = 1 - currRow ;
  }
  return result ;
}
