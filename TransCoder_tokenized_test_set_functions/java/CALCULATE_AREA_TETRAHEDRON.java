static double vol_tetra ( int side ) {
  double volume = ( Math . pow ( side, 3 ) / ( 6 * Math . sqrt ( 2 ) ) );
  return volume;
}