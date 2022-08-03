static void sortByPattern ( char [ ] str, char [ ] pat ) {
  int count [ ] = new int [ MAX_CHAR ];
  for ( int i = 0;
  i < str . length;
  i ++ ) {
    count [ str [ i ] - 'a' ] ++;
  }
  int index = 0;
  for ( int i = 0;
  i < pat . length;
  i ++ ) {
    for ( int j = 0;
    j < count [ pat [ i ] - 'a' ];
    j ++ ) {
      str [ index ++ ] = pat [ i ];
    }
  }
}