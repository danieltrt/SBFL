static Boolean divisibleBy20 ( String num ) {
  int lastTwoDigits = Integer . parseInt ( num . substring ( num . length ( ) - 2, num . length ( ) ) );
  return ( ( lastTwoDigits % 5 == 0 ) && ( lastTwoDigits % 4 == 0 ) );
}