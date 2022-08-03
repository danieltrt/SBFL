static double arcLength ( double diameter, double angle ) {
  double pi = 22.0 / 7.0;
  double arc;
  if ( angle >= 360 ) {
    System . out . println ( "Angle cannot" + " be formed" );
    return 0;
  }
  else {
    arc = ( pi * diameter ) * ( angle / 360.0 );
    return arc;
  }
}