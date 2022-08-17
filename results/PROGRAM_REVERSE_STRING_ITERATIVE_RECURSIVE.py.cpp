void recursiveReverse ( string str ) {
  stack < string > stack ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) stack . push ( str [ i ] ) ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) str [ i ] = stack . top ( ) ;
}
