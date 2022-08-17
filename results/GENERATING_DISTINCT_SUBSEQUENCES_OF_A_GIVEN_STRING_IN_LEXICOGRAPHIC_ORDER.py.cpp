void generate ( set < string > & st , string s ) {
  if ( s . length ( ) == 0 ) return ;
  if ( s != "" ) {
    st . insert ( s ) ;
    for ( int i = 0 ;
    i < s . length ( ) ;
    i ++ ) {
      string t = list ( s ) . erase ( s . begin ( ) + i ) ;
      string t ;
      t . reserve ( t . length ( ) ) ;
      generate ( st , t ) ;
    }
  }
}
