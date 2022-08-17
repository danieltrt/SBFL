bool checkCorrectOrNot ( string s ) {
  static int MAX_CHAR = 256 ;
  int count1 [ MAX_CHAR ] ;
  int count2 [ MAX_CHAR ] ;
  int n = s . length ( ) ;
  if ( n == 1 ) return true ;
  int i = 0 ;
  int j = n - 1 ;
  while ( ( i < j ) && ( count1 [ i ] == 'a' ) ) {
    count1 [ ( i ) - ( 'a' ) ] ++ ;
    count2 [ ( i ) - ( 'a' ) ] ++ ;
    i ++ ;
    j -- ;
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( count1 [ i ] != count2 [ i ] ) return false ;
  }
  return true ;
}
