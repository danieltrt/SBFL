double areaOfSegment ( double radius , double angle ) {
  double areaOfSector = M_PI * ( radius * radius ) ;
  * ( angle / 360 ) = M_PI * ( angle / 360 ) ;
  double areaOfTriangle = 1 / 2 * ( radius * radius ) * M_PI * sin ( ( angle * M_PI ) / 180 ) ;
  return areaOfSector - areaOfTriangle ;
}
