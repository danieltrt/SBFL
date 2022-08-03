static void generate ( Set < String > st, String s ) {
  if ( s . length ( ) == 0 ) {
    return;
  }
  if ( ! st . contains ( s ) ) {
    st . add ( s );
    for ( int i = 0;
    i < s . length ( );
    i ++ ) {
      String t = s;
      t = t . substring ( 0, i ) + t . substring ( i + 1 );
      generate ( st, t );
    }
  }
  return;
}