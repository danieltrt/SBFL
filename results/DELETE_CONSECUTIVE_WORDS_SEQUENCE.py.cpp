int removeConsecutiveSame ( string v ) {
  int n = v . length ( ) ;
  int i = 0 ;
  while ( ( i < n - 1 ) && ( ( i + 1 ) < v . length ( ) ) ) {
    if ( ( ( i + 1 ) < v . length ( ) ) && ( v [ i ] == v [ i + 1 ] ) ) {
      v . erase ( 0 , i ) ;
      v . erase ( i + 1 , v . length ( ) ) ;
      if ( ( i > 0 ) && ( i < n - 2 ) ) i -- ;
      n = n - 2 ;
    }
    else i ++ ;
  }
  return v . length ( ) ;
}
