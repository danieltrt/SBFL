void generate ( set < string > & st, string s ) {
  if ( s . size ( ) == 0 ) return;
  if ( st . find ( s ) == st . end ( ) ) {
    st . insert ( s );
    for ( int i = 0;
    i < s . size ( );
    i ++ ) {
      string t = s;
      t . erase ( i, 1 );
      generate ( st, t );
    }
  }
  return;
}