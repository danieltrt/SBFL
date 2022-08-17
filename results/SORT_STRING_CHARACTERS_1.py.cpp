void sortString ( string str ) {
  int charCount [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i += 1 ) {
    charCount [ str [ i ] - 'a' ] ++ ;
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i += 1 ) {
    for ( int j = 0 ;
    charCount [ i ] < 1 ;
    j += 1 ) {
      cout << ( char ) ( 'a' + i ) << " " ;
    }
  }
}
