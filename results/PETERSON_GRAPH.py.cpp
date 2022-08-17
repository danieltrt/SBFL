bool findthepath ( string S , int v ) {
  int result [ 2 ] ;
  result [ 0 ] = v ;
  for ( int i = 1 ;
  i < S . length ( ) ;
  i ++ ) {
    if ( ( adj [ v ] [ S [ i ] - 'A' ] || adj [ S [ i ] - 'A' ] [ v ] ) ) v = S [ i ] - 'A' ;
    else if ( ( adj [ v ] [ S [ i ] - 'A' + 5 ] || adj [ S [ i ] - 'A' + 5 ] [ v ] ) ) v = S [ i ] - 'A' + 5 ;
    else return false ;
    result [ 0 ] = v ;
  }
  return true ;
}
