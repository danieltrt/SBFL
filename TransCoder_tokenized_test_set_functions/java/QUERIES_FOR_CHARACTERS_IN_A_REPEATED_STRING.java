static void query ( String s, int i, int j ) {
  int n = s . length ( );
  i %= n;
  j %= n;
  if ( s . charAt ( i ) == s . charAt ( j ) ) System . out . println ( "Yes" );
  else System . out . println ( "No" );
}