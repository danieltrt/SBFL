int findLastIndex ( string str, char x ) {
  for ( int i = str . length ( ) - 1;
  i >= 0;
  i -- ) if ( str . at ( i ) == x ) return i;
  return - 1;
}