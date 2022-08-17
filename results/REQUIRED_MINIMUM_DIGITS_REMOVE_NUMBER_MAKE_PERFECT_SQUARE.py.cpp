int perfectSquare ( string s ) {
  int n = s . length ( ) ;
  int ans = - 1 ;
  string num ;
  for ( int i = 1 ;
  i <= ( 1 << n ) ;
  i ++ ) {
    string str ;
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( ( ( i >> j ) & 1 ) != 0 ) str = str + s [ j ] ;
    }
    if ( ( str [ 0 ] != '0' ) && ( str [ 0 ] != '1' ) ) {
      int temp = 0 ;
      ;
      for ( int j = 0 ;
      j < str . length ( ) ;
      j ++ ) temp = ( temp * 10 + ( str [ j ] - '0' ) ) ;
      int k = ( int ) sqrt ( temp ) ;
      if ( ( k * k == temp ) && ( ans < str . length ( ) ) ) {
        ans = str . length ( ) ;
        num = str ;
      }
    }
  }
  if ( ( ans == - 1 ) && ( ans == n ) ) return ans ;
  else {
    cout << "{} " << num << endl ;
    return n - ans ;
  }
}
