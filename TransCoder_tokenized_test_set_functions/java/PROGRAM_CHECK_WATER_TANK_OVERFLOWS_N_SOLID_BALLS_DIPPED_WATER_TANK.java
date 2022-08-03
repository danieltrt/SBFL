static void overflow ( int H, int r, int h, int N, int R ) {
  double tank_cap = 3.14 * r * r * H;
  double water_vol = 3.14 * r * r * h;
  double balls_vol = N * ( 4 / 3 ) * 3.14 * R * R * R;
  double vol = water_vol + balls_vol;
  if ( vol > tank_cap ) {
    System . out . println ( "Overflow" );
  }
  else {
    System . out . println ( "Not in overflow state" );
  }
}