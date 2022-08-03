static void sortString ( String str ) {
  int charCount [ ] = new int [ MAX_CHAR ];
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    charCount [ str . charAt ( i ) - 'a' ] ++;
  }
  for ( int i = MAX_CHAR - 1;
  i >= 0;
  i -- ) {
    for ( int j = 0;
    j < charCount [ i ];
    j ++ ) {
      System . out . print ( ( char ) ( 'a' + i ) );
    }
  }
}