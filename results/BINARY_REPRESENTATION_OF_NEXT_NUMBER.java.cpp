string nextGreater ( string num ) {
  int l = num . length ( ) ;
  int i ;
  for ( i = l - 1 ;
  i >= 0 ;
  i -- ) {
    if ( num [ i ] == '0' ) {
      num = num . substr ( 0 , i ) + '1' + num . substr ( i + 1 ) ;
      break ;
    }
    else {
      num = num . substr ( 0 , i ) + '0' + num . substr ( i + 1 ) ;
    }
  }
  if ( i < 0 ) num = "1" + num ;
  return num ;
}
