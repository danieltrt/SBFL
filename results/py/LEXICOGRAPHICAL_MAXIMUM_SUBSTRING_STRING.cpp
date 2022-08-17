string f_filled ( string str ) {
  string mx ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) mx = max ( mx , str . substr ( i ) ) ;
  return mx ;
}
