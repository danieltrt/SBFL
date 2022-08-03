static void checkPoint ( int radius, int x, int y, float percent, float startAngle ) {
  float endAngle = 360 / percent + startAngle;
  double polarradius = Math . sqrt ( x * x + y * y );
  double Angle = Math . atan ( y / x );
  if ( Angle >= startAngle && Angle <= endAngle && polarradius < radius ) System . out . print ( "Point" + "(" + x + "," + y + ")" + " exist in the circle sector\n" );
  else System . out . print ( "Point" + "(" + x + "," + y + ")" + " exist in the circle sector\n" );
}