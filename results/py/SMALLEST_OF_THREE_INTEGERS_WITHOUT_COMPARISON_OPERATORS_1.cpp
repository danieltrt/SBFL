int f_filled ( int x , int y , int z ) {
  if ( ( ! ( y / x ) ) && ( ! ( y / z ) ) ) return y == x ? y : z == x ? x : z ;
  return ( ! ( x / z ) ) ? x : z ;
}
