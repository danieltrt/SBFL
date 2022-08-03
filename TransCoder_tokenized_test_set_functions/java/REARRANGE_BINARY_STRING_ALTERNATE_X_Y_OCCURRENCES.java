static void arrangeString ( String str, int x, int y ) {
  int count_0 = 0;
  int count_1 = 0;
  int len = str . length ( );
  for ( int i = 0;
  i < len;
  i ++ ) {
    if ( str . charAt ( i ) == '0' ) count_0 ++;
    else count_1 ++;
  }
  while ( count_0 > 0 || count_1 > 0 ) {
    for ( int j = 0;
    j < x && count_0 > 0;
    j ++ ) {
      if ( count_0 > 0 ) {
        System . out . print ( "0" );
        count_0 --;
      }
    }
    for ( int j = 0;
    j < y && count_1 > 0;
    j ++ ) {
      if ( count_1 > 0 ) {
        System . out . print ( "1" );
        count_1 --;
      }
    }
  }
}