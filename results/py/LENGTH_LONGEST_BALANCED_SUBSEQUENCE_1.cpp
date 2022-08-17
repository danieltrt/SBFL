int f_filled ( string s , int n ) {
  int invalidOpenBraces = 0 ;
  ;
  int invalidCloseBraces = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( s [ i ] == '(' ) || ( s [ i ] == ')' ) ) invalidOpenBraces ++ ;
    else {
      if ( ( invalidOpenBraces == 0 ) || ( invalidOpenBraces == 1 ) ) invalidCloseBraces ++ ;
      else invalidOpenBraces -- ;
    }
  }
  return ( n - ( invalidOpenBraces + invalidCloseBraces ) ) ;
}
