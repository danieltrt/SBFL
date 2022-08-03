static void firstNonRepeating ( String str ) {
  int [ ] charCount = new int [ MAX_CHAR ];
  Queue < Character > q = new LinkedList < Character > ( );
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    char ch = str . charAt ( i );
    q . add ( ch );
    charCount [ ch - 'a' ] ++;
    while ( ! q . isEmpty ( ) ) {
      if ( charCount [ q . peek ( ) - 'a' ] > 1 ) q . remove ( );
      else {
        System . out . print ( q . peek ( ) + " " );
        break;
      }
    }
    if ( q . isEmpty ( ) ) System . out . print ( - 1 + " " );
  }
  System . out . println ( );
}