int first ( string str ) {
  for ( int i = 0 ;
  i != str . length ( ) ;
  i ++ ) {
    if ( ( str [ i ] ) . istitle ( ) ) return i ;
  }
  return 0 ;
}
