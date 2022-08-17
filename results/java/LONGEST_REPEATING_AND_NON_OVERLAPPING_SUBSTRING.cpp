string f_filled ( string str ) {
  int n = str . length ( ) ;
  vector < vector < int >> LCSRe ( n + 1 , vector < int > ( n + 1 , 0 ) ) ;
  string res ;
  int resLength = 0 ;
  int i , index = 0 ;
  for ( i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n ;
    j ++ ) {
      if ( str [ i - 1 ] == str [ j - 1 ] && LCSRe [ i - 1 ] [ j - 1 ] < ( j - i ) ) {
        LCSRe [ i ] [ j ] = LCSRe [ i - 1 ] [ j - 1 ] + 1 ;
        if ( LCSRe [ i ] [ j ] > resLength ) {
          resLength = LCSRe [ i ] [ j ] ;
          index = max ( i , index ) ;
        }
      }
      else LCSRe [ i ] [ j ] = 0 ;
    }
  }
  if ( resLength > 0 ) {
    for ( i = index - resLength + 1 ;
    i <= index ;
    i ++ ) res += str [ i - 1 ] ;
  }
  return res ;
}
