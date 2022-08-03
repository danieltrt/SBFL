static void printDuo ( String str ) {
  int countChar [ ] = new int [ MAX_CHAR ];
  int n = str . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    countChar [ str . charAt ( i ) - 'a' ] ++;
  }
  String str1 = "", str2 = "";
  for ( int i = 0;
  i < MAX_CHAR;
  i ++ ) {
    if ( countChar [ i ] > 1 ) {
      str2 = str2 + ( char ) ( i + 'a' );
    }
    else if ( countChar [ i ] == 1 ) {
      str1 = str1 + ( char ) ( i + 'a' );
    }
  }
  System . out . print ( "String with characters occurring " + "once:\n" );
  System . out . print ( str1 + "\n" );
  System . out . print ( "String with characters occurring " + "multiple times:\n" );
  System . out . print ( str2 + "\n" );
  System . out . print ( "" );
}