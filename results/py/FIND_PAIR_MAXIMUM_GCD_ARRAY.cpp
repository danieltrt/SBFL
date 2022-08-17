int f_filled ( int arr [ ] , int n ) {
  int high = 0 ;
  int i = 0 ;
  while ( i < n ) {
    high = max ( high , arr [ i ] ) ;
    i = i + 1 ;
  }
  int divisors [ n + 1 ] ;
  memset ( divisors , 0 , sizeof divisors ) ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) {
    int j = 1 ;
    while ( j <= sqrt ( arr [ i ] ) ) {
      if ( ( arr [ i ] % j == 0 ) && ( j != arr [ i ] / j ) ) {
        divisors [ j ] = divisors [ j ] + 1 ;
        if ( ( arr [ i ] / j ) != 0 ) {
          divisors [ arr [ i ] / j ] = divisors [ arr [ i ] / j ] ;
          + 1 ;
        }
      }
    }
    j = j + 1 ;
  }
  i = high ;
  while ( i >= 1 ) {
    if ( ( divisors [ i ] > 1 ) && ( divisors [ i ] > 1 ) ) return i ;
    i = i - 1 ;
  }
  return 1 ;
}
