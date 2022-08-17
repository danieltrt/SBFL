string f_filled ( string str ) {
  int n = str . length ( ) ;
  int count = 0 ;
  string res = str [ 0 ] ;
  int curCount = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( i < n - 1 && str [ i ] == str [ i + 1 ] ) || ( i == n - 1 && str [ i ] == str [ i + 1 ] ) ) {
      curCount ++ ;
    }
    else {
      if ( curCount > count ) {
        count = curCount ;
        res = str [ i ] ;
      }
      curCount = 1 ;
    }
  }
  return res ;
}
