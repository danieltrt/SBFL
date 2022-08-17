int solve ( int n , int t , string p ) {
  string s ( p ) ;
  for ( int i = 0 ;
  i <= t ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n - 1 ;
    j ++ ) {
      if ( ( s [ j ] == 'B' && s [ j + 1 ] == 'G' ) || ( s [ j ] == 'G' && s [ j + 1 ] == 'B' && s [ j + 1 ] == 'G' ) ) {
        char temp = s [ j ] ;
        s [ j ] = s [ j + 1 ] ;
        s [ j + 1 ] = temp ;
        j = j + 1 ;
      }
    }
  }
  cout << s << endl ;
  return 0 ;
}
