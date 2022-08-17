int f_filled ( int C , int l ) {
  if ( ( l >= C ) && ( l <= C ) ) return C ;
  double eqRoot = ( sqrt ( 1 + 8 * ( C - l ) ) - 1 ) / 2 ;
  return ceil ( eqRoot ) + l ;
}
