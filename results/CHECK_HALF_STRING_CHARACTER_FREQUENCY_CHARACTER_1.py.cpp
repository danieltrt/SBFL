bool checkCorrectOrNot ( string s ) {
  static int MAX_CHAR = 256 ;
  int count [ MAX_CHAR ] ;
  int n = s . length ( ) ;
  if ( n == 1 ) return true ;
  int i = 0 ;
  int j = n - 1 ;
  while ( i < j ) {
    count [ s [ i ] - 'a' ] ++ ;
    count [ s [ j ] - 'a' ] -- ;
    i ++ ;
    j -- ;
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( count [ i ] != 0 ) return false ;
  }
  return true ;
}
