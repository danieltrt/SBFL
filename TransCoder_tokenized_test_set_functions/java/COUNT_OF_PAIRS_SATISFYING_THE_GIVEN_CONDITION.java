static int countPair ( int a, int b ) {
  String s = String . valueOf ( b );
  int i;
  for ( i = 0;
  i < s . length ( );
  i ++ ) {
    if ( s . charAt ( i ) != '9' ) break;
  }
  int result;
  if ( i == s . length ( ) ) result = a * s . length ( );
  else result = a * ( s . length ( ) - 1 );
  return result;
}