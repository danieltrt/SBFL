bool divisibleBy20 ( string num ) {
  int lastTwoDigits = atoi ( num . substr ( num . length ( ) - 2 , num . length ( ) ) . c_str ( ) ) ;
  return ( ( lastTwoDigits % 5 == 0 ) && ( lastTwoDigits % 4 == 0 ) ) ;
}
