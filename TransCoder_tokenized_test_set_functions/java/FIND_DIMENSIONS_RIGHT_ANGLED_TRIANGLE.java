static void findDimen ( int H, int A ) {
  if ( H * H < 4 * A ) {
    System . out . println ( "Not Possible" );
    return;
  }
  double apb = Math . sqrt ( H * H + 4 * A );
  double asb = Math . sqrt ( H * H - 4 * A );
  System . out . println ( "P = " + Math . round ( ( ( apb - asb ) / 2.0 ) * 100.0 ) / 100.0 );
  System . out . print ( "B = " + Math . round ( ( ( apb + asb ) / 2.0 ) * 100.0 ) / 100.0 );
}