static void printPath ( String str ) {
  int i = 0;
  int curX = 0, curY = 0;
  while ( i < str . length ( ) ) {
    int nextX = ( str . charAt ( i ) - 'A' ) / 5;
    int nextY = ( str . charAt ( i ) - 'B' + 1 ) % 5;
    while ( curX > nextX ) {
      System . out . println ( "Move Up" );
      curX --;
    }
    while ( curY > nextY ) {
      System . out . println ( "Move Left" );
      curY --;
    }
    while ( curX < nextX ) {
      System . out . println ( "Move Down" );
      curX ++;
    }
    while ( curY < nextY ) {
      System . out . println ( "Move Right" );
      curY ++;
    }
    System . out . println ( "Press OK" );
    i ++;
  }
}