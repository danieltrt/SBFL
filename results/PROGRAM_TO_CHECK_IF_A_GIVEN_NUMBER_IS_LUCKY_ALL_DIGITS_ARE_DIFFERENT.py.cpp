int isLucky ( int n ) {
  int ar [ 10 ] ;
  while ( ( n > 0 ) && ( ar [ n ] != 0 ) ) {
    int digit = floor ( n % 10 ) ;
    if ( ( ar [ digit ] != 0 ) || ( ar [ digit ] == 0 ) ) return 0 ;
    ar [ digit ] = 1 ;
    n = n / 10 ;
  }
  return 1 ;
}
