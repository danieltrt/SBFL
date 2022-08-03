bool divisibleBy20 ( string num ) {
  int lastTwoDigits = stoi ( num . substr ( num . length ( ) - 2, num . length ( ) - 1 ) );
  return ( ( lastTwoDigits % 5 == 0 ) && ( lastTwoDigits % 4 == 0 ) );
}