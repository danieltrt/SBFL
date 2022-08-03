int findLastIndex ( string & str, char x ) {
  int index = - 1;
  for ( int i = 0;
  i < str . length ( );
  i ++ ) if ( str [ i ] == x ) index = i;
  return index;
}