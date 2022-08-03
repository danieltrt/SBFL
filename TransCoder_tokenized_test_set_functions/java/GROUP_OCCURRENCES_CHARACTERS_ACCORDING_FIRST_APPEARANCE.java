static void printGrouped ( String str ) {
  int n = str . length ( );
  int count [ ] = new int [ MAX_CHAR ];
  for ( int i = 0;
  i < n;
  i ++ ) count [ str . charAt ( i ) - 'a' ] ++;
  for ( int i = 0;
  i < n;
  i ++ ) {
    while ( count [ str . charAt ( i ) - 'a' ] != 0 ) {
      System . out . print ( str . charAt ( i ) );
      count [ str . charAt ( i ) - 'a' ] --;
    }
    count [ str . charAt ( i ) - 'a' ] = 0;
  }
}