static void midPointCircleDraw ( int x_centre, int y_centre, int r ) {
  int x = r, y = 0;
  System . out . print ( "(" + ( x + x_centre ) + ", " + ( y + y_centre ) + ")" );
  if ( r > 0 ) {
    System . out . print ( "(" + ( x + x_centre ) + ", " + ( - y + y_centre ) + ")" );
    System . out . print ( "(" + ( y + x_centre ) + ", " + ( x + y_centre ) + ")" );
    System . out . println ( "(" + ( - y + x_centre ) + ", " + ( x + y_centre ) + ")" );
  }
  int P = 1 - r;
  while ( x > y ) {
    y ++;
    if ( P <= 0 ) P = P + 2 * y + 1;
    else {
      x --;
      P = P + 2 * y - 2 * x + 1;
    }
    if ( x < y ) break;
    System . out . print ( "(" + ( x + x_centre ) + ", " + ( y + y_centre ) + ")" );
    System . out . print ( "(" + ( - x + x_centre ) + ", " + ( y + y_centre ) + ")" );
    System . out . print ( "(" + ( x + x_centre ) + ", " + ( - y + y_centre ) + ")" );
    System . out . println ( "(" + ( - x + x_centre ) + ", " + ( - y + y_centre ) + ")" );
    if ( x != y ) {
      System . out . print ( "(" + ( y + x_centre ) + ", " + ( x + y_centre ) + ")" );
      System . out . print ( "(" + ( - y + x_centre ) + ", " + ( x + y_centre ) + ")" );
      System . out . print ( "(" + ( y + x_centre ) + ", " + ( - x + y_centre ) + ")" );
      System . out . println ( "(" + ( - y + x_centre ) + ", " + ( - x + y_centre ) + ")" );
    }
  }
}