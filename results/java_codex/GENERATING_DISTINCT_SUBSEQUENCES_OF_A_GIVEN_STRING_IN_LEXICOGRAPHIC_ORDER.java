void generate ( set < string > & st, string s ) {
  if ( s . length ( ) == 0 ) {
    return;
  }
  if ( st . find ( s ) == st . end ( ) ) {
    st . insert ( s );
    for ( int i = 0;
    i < s . length ( );
    i ++ ) {
      string t = s;
      t = t . substr ( 0, i ) + t . substr ( i + 1 );
      generate ( st, t );
    }
  }
  return;
}