void printDuo ( string string ) {
  int countChar [ MAX_CHAR ] ;
  int n = string . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) countChar [ ( int ) string [ i ] - ( int ) 'a' ] ++ ;
  string = "" ;
  string = "" ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( ( countChar [ i ] > 1 ) || ( countChar [ i ] == 1 ) ) {
      string = string + ( char ) ( i + 'a' ) ;
    }
    else if ( ( countChar [ i ] == 1 ) || ( countChar [ i ] == 2 ) ) {
      string = string + ( char ) ( i + 'a' ) ;
    }
  }
  cout << "String with characters occurring once:" << "\n" << str1 << endl ;
  cout << "String with characters occurring" << "multiple times:" << "\n" << str2 << endl ;
}
