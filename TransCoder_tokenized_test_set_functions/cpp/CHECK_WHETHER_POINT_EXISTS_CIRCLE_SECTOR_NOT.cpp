void checkPoint ( int radius, int x, int y, float percent, float startAngle ) {
  float endAngle = 360 / percent + startAngle;
  float polarradius = sqrt ( x * x + y * y );
  float Angle = atan ( y / x );
  if ( Angle >= startAngle && Angle <= endAngle && polarradius < radius ) printf ( "Point (%d, %d) exist in the circle sector\n", x, y );
  else printf ( "Point (%d, %d) does not exist in the circle sector\n", x, y );
}