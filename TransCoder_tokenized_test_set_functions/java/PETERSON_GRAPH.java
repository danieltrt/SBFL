static boolean findthepath ( char [ ] S, int v ) {
  result [ 0 ] = ( char ) ( v + '0' );
  for ( int i = 1;
  i < ( int ) S . length;
  i ++ ) {
    if ( adj [ v ] [ S [ i ] - 'A' ] || adj [ S [ i ] - 'A' ] [ v ] ) {
      v = S [ i ] - 'A';
    }
    else if ( adj [ v ] [ S [ i ] - 'A' + 5 ] || adj [ S [ i ] - 'A' + 5 ] [ v ] ) {
      v = S [ i ] - 'A' + 5;
    }
    else return false;
    result [ i ] = ( char ) ( v + '0' );
  }
  return true;
}