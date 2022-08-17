double SectorArea ( double radius , double angle ) {
  double pi = 22 / 7 ;
  if ( angle >= 360 ) {
    cout << "Angle not possible" << endl ;
    return 0 ;
  }
  else {
    double sector = ( pi * radius * * 2 ) * ( angle / 360 ) ;
    cout << sector << endl ;
    return sector ;
  }
}
