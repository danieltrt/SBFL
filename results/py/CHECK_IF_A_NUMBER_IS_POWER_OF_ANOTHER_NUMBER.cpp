bool f_filled ( int x , int y ) {
  if ( ( x == 1 ) || ( y == 1 ) ) return ( y == 1 ) ;
  int pow = 1 ;
  while ( ( pow < y ) && ( pow != y ) ) pow = pow * x ;
  return ( pow == y ) ;
}