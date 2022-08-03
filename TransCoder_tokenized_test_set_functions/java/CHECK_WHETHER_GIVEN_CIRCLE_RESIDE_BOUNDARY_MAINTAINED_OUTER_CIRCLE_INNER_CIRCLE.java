static void fitOrNotFit ( int R, int r, int x, int y, int rad ) {
  double val = Math . sqrt ( Math . pow ( x, 2 ) + Math . pow ( y, 2 ) );
  if ( val + rad <= R && val - rad >= R - r ) System . out . println ( "Fits" );
  else System . out . println ( "Doesn't Fit" );
}