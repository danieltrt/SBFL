static int findLastIndex ( String str, Character x ) {
  for ( int i = str . length ( ) - 1;
  i >= 0;
  i -- ) if ( str . charAt ( i ) == x ) return i;
  return - 1;
}