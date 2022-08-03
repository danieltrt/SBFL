static int findLastIndex ( String str, Character x ) {
  int index = - 1;
  for ( int i = 0;
  i < str . length ( );
  i ++ ) if ( str . charAt ( i ) == x ) index = i;
  return index;
}