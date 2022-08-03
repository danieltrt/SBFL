static void printStringAlternate ( String str ) {
  int [ ] occ = new int [ 122 ];
  String s = str . toLowerCase ( );
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    char temp = s . charAt ( i );
    occ [ temp ] ++;
    if ( occ [ temp ] % 2 != 0 ) System . out . print ( str . charAt ( i ) );
  }
  System . out . println ( );
}