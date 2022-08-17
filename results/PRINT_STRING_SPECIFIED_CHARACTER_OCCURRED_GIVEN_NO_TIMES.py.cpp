void printString ( string str , char ch , int count ) {
  int occ = 0 , i = 0 ;
  if ( ( count == 0 ) || ( count == 1 ) ) cout << str << endl ;
  for ( i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( ( str [ i ] == ch ) || ( ch == ' ' ) ) occ ++ ;
    if ( ( occ == count ) || ( ch == ' ' ) ) break ;
  }
  if ( ( i < str . length ( ) - 1 ) || ( ch == ' ' ) ) cout << str . substr ( i + 1 , str . length ( ) - i + 2 ) << endl ;
  else cout << "Empty string" << endl ;
}
