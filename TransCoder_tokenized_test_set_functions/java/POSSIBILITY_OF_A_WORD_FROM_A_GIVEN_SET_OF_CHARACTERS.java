static boolean isPresent ( String s, String q ) {
  int [ ] freq = new int [ MAX_CHAR ];
  for ( int i = 0;
  i < s . length ( );
  i ++ ) freq [ s . charAt ( i ) ] ++;
  for ( int i = 0;
  i < q . length ( );
  i ++ ) {
    freq [ q . charAt ( i ) ] --;
    if ( freq [ q . charAt ( i ) ] < 0 ) return false;
  }
  return true;
}