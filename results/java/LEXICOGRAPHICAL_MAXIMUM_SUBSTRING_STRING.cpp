string f_filled ( string str ) {
  string mx ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  ++ i ) {
    if ( mx . compare ( str . substr ( i ) ) <= 0 ) mx = str . substr ( i ) ;
  }
  return mx ;
}
