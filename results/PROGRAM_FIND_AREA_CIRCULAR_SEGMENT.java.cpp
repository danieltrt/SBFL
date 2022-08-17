float area_of_segment ( float radius , float angle ) {
  float area_of_sector = M_PI * ( radius * radius ) * ( angle / 360 ) ;
  float area_of_triangle = ( float ) 1 / 2 * ( radius * radius ) * ( float ) sin ( ( angle * M_PI ) / 180 ) ;
  return area_of_sector - area_of_triangle ;
}
