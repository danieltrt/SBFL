void SectorArea ( double radius, double angle ) {
  if ( angle >= 360 ) cout << "Angle not possible";
  else {
    double sector = ( ( 22 * radius * radius ) / 7 ) * ( angle / 360 );
    cout << sector;
  }
}