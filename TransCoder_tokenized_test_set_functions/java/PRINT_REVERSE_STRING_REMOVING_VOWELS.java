static void replaceOriginal ( String s, int n ) {
  char r [ ] = new char [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    r [ i ] = s . charAt ( n - 1 - i );
    if ( s . charAt ( i ) != 'a' && s . charAt ( i ) != 'e' && s . charAt ( i ) != 'i' && s . charAt ( i ) != 'o' && s . charAt ( i ) != 'u' ) {
      System . out . print ( r [ i ] );
    }
  }
  System . out . println ( "" );
}