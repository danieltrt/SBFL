int countToMake0lternate ( string s ) {
  int result = 0;
  for ( int i = 0;
  i < ( s . length ( ) - 1 );
  i ++ ) if ( s [ i ] == s [ i + 1 ] ) result ++;
  return result;
}