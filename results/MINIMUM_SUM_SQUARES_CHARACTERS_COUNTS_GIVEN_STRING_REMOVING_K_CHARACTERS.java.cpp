int minStringValue ( string str , int k ) {
  int l = str . length ( ) ;
  if ( k >= l ) return 0 ;
  vector < int > frequency ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i < l ;
  i ++ ) {
    frequency [ str [ i ] - 'a' ] ++ ;
  }
  vector < int > c ( MAX_CHAR , 0 ) ;
  vector < int > :: iterator it = c . begin ( ) ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( frequency [ i ] != 0 ) {
      it = c . erase ( it ) ;
    }
  }
  while ( k != 0 ) {
    int temp = * it ;
    it = c . begin ( ) ;
    temp = temp - 1 ;
    it = c . erase ( it ) ;
    k -- ;
  }
  int result = 0 ;
  while ( ! q . empty ( ) ) {
    int temp = * it ;
    result += temp * temp ;
    it ++ ;
  }
  return result ;
}
