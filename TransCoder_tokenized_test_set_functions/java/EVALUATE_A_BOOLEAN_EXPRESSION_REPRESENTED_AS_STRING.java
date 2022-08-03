static int evaluateBoolExpr ( StringBuffer s ) {
  int n = s . length ( );
  for ( int i = 0;
  i < n;
  i += 2 ) {
    if ( i + 1 < n && i + 2 < n ) {
      if ( s . charAt ( i + 1 ) == 'A' ) {
        if ( s . charAt ( i + 2 ) == '0' || s . charAt ( i ) == 0 ) s . setCharAt ( i + 2, '0' );
        else s . setCharAt ( i + 2, '1' );
      }
      else if ( ( i + 1 ) < n && s . charAt ( i + 1 ) == 'B' ) {
        if ( s . charAt ( i + 2 ) == '1' || s . charAt ( i ) == '1' ) s . setCharAt ( i + 2, '1' );
        else s . setCharAt ( i + 2, '0' );
      }
      else {
        if ( s . charAt ( i + 2 ) == s . charAt ( i ) ) s . setCharAt ( i + 2, '0' );
        else s . setCharAt ( i + 2, '1' );
      }
    }
  }
  return s . charAt ( n - 1 ) - '0';
}