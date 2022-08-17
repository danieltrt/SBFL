void printDistinct ( string str ) {
  vector < int > count ( NO_OF_CHARS , 0 ) ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( ( str [ i ] != ' ' ) && ( str [ i ] != ' ' ) ) count [ ( str [ i ] ) ] ++ ;
  }
  int n = i ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( count [ ( str [ i ] ) ] == 1 ) && ( count [ ( str [ i ] ) ] == 0 ) ) cout << str [ i ] << " " ;
  }
}
