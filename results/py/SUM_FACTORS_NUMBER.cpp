int f_filled ( int n ) {
  int result = 0 ;
  for ( int i = 2 ;
  i <= ( int ) ( sqrt ( n ) ) ;
  i ++ ) {
    if ( ( n % i ) == 0 ) {
      if ( ( i == ( n / i ) ) || ( i == ( n / i ) ) ) result = result + i ;
      else result = result + ( i + n / i ) ;
    }
  }
  return ( result + n + 1 ) ;
}
