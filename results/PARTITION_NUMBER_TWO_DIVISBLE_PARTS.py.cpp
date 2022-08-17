int findDivision ( string str , int a , int b ) {
  int lenn = str . length ( ) ;
  int lr [ lenn + 1 ] ;
  lr [ 0 ] = ( atoi ( str [ 0 ] . c_str ( ) ) ) % a ;
  for ( int i = 1 ;
  i < lenn ;
  i ++ ) lr [ i ] = ( ( lr [ i - 1 ] * 10 ) % a + int ( str [ i ] ) ) % a ;
  int rl [ lenn + 1 ] ;
  rl [ lenn - 1 ] = ( atoi ( str [ lenn - 1 ] . c_str ( ) ) ) % b ;
  int power10 = 10 ;
  for ( int i = lenn - 2 ;
  i >= 0 ;
  i -- ) {
    rl [ i ] = ( rl [ i + 1 ] + atoi ( str [ i ] . c_str ( ) ) * power10 ) % b ;
    power10 = ( power10 * 10 ) % b ;
  }
  for ( int i = 0 ;
  i <= lenn - 1 ;
  i ++ ) {
    if ( ( lr [ i ] != 0 ) && ( lr [ i + 1 ] != 0 ) ) continue ;
    if ( ( rl [ i + 1 ] == 0 ) && ( rl [ i + 2 ] == 0 ) ) {
      cout << "YES" ;
      for ( int k = 0 ;
      k <= i + 1 ;
      k ++ ) cout << str [ k ] << " " ;
      cout << "," << " " ;
      for ( int i = i + 1 ;
      i < lenn ;
      i ++ ) {
        cout << str [ k ] << " " ;
        return i ;
      }
    }
  }
  cout << "NO" << endl ;
  return - 1 ;
}
