int countManipulations ( string s1, string s2 ) {
  int count = 0;
  int char_count [ 26 ];
  for ( int i = 0;
  i < 26;
  i ++ ) {
    char_count [ i ] = 0;
  }
  for ( int i = 0;
  i < s1 . length ( );
  i ++ ) char_count [ s1 [ i ] - 'a' ] ++;
  for ( int i = 0;
  i < s2 . length ( );
  i ++ ) {
    char_count [ s2 [ i ] - 'a' ] --;
    if ( char_count [ s2 [ i ] - 'a' ] < 0 ) count ++;
  }
  return count;
}