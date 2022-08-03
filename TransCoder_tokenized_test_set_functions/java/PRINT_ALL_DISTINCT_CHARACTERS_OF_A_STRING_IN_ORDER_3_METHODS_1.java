static void printDistinct ( String str ) {
  int n = str . length ( );
  int [ ] count = new int [ MAX_CHAR ];
  int [ ] index = new int [ MAX_CHAR ];
  for ( int i = 0;
  i < MAX_CHAR;
  i ++ ) {
    count [ i ] = 0;
    index [ i ] = n;
  }
  for ( int i = 0;
  i < n;
  i ++ ) {
    char x = str . charAt ( i );
    ++ count [ x ];
    if ( count [ x ] == 1 && x != ' ' ) index [ x ] = i;
    if ( count [ x ] == 2 ) index [ x ] = n;
  }
  Arrays . sort ( index );
  for ( int i = 0;
  i < MAX_CHAR && index [ i ] != n;
  i ++ ) System . out . print ( str . charAt ( index [ i ] ) );
}