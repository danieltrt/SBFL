static void direction ( int R, int C ) {
  if ( R != C && R % 2 == 0 && C % 2 != 0 && R < C ) {
    System . out . println ( "Left" );
    return;
  }
  if ( R != C && R % 2 != 0 && C % 2 == 0 && R > C ) {
    System . out . println ( "Up" );
    return;
  }
  if ( R == C && R % 2 != 0 && C % 2 != 0 ) {
    System . out . println ( "Right" );
    return;
  }
  if ( R == C && R % 2 == 0 && C % 2 == 0 ) {
    System . out . println ( "Left" );
    return;
  }
  if ( R != C && R % 2 != 0 && C % 2 != 0 && R < C ) {
    System . out . println ( "Right" );
    return;
  }
  if ( R != C && R % 2 != 0 && C % 2 != 0 && R > C ) {
    System . out . println ( "Down" );
    return;
  }
  if ( R != C && R % 2 == 0 && C % 2 == 0 && R < C ) {
    System . out . println ( "Left" );
    return;
  }
  if ( R != C && R % 2 == 0 && C % 2 == 0 && R > C ) {
    System . out . println ( "Up" );
    return;
  }
  if ( R != C && R % 2 == 0 && C % 2 != 0 && R > C ) {
    System . out . println ( "Down" );
    return;
  }
  if ( R != C && R % 2 != 0 && C % 2 == 0 && R < C ) {
    System . out . println ( "Right" );
    return;
  }
}