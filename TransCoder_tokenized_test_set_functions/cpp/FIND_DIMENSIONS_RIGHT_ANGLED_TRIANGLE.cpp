void findDimen ( int H, int A ) {
  if ( H * H < 4 * A ) {
    cout << "Not Possible\n";
    return;
  }
  double apb = sqrt ( H * H + 4 * A );
  double asb = sqrt ( H * H - 4 * A );
  cout . precision ( 2 );
  cout << "P = " << fixed << ( apb - asb ) / 2.0 << "\n";
  cout << "B = " << ( apb + asb ) / 2.0;
}