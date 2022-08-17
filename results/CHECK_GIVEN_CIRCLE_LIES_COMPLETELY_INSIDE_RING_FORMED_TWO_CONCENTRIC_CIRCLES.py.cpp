bool checkcircle ( double r , double R , double r1 , double x1 , double y1 ) {
  int dis = ( int ) sqrt ( x1 * x1 + y1 * y1 ) ;
  return ( dis - r1 >= R && dis + r1 <= r ) ;
}
