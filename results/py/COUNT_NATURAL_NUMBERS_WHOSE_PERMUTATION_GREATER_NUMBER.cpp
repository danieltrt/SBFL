int f_filled ( int n ) {
  int result = 0 ;
  for ( int i = 1 ;
  i <= 10 ;
  i ++ ) {
    stack < int > s ;
    if ( ( i <= n ) && ( s . size ( ) > 0 ) ) {
      s . push ( i ) ;
      result ++ ;
    }
    while ( s . size ( ) != 0 ) {
      int tp = s . top ( ) ;
      s . pop ( ) ;
      for ( int j = tp % 10 ;
      j < 10 ;
      j ++ ) {
        int x = tp * 10 + j ;
        if ( ( x <= n ) && ( s . size ( ) > 0 ) ) {
          s . push ( x ) ;
          result ++ ;
        }
      }
    }
  }
  return result ;
}
