int f_filled ( int * p , int i , int j ) {
  if ( i == j ) return 0 ;
  int _min = INT_MAX ;
  for ( int k = i ;
  k < j ;
  k ++ ) {
    int count = ( f_filled ( p , i , k ) + f_filled ( p , k + 1 , j ) + p [ i - 1 ] * p [ k ] * p [ j ] ) ;
    if ( count < _min ) _min = count ;
    ;
  }
  return _min ;
}
