double possibleStrings ( int n , int r , int b , int g ) {
  double fact [ n + 1 ] ;
  fact [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= n ;
  i += 1 ) fact [ i ] = fact [ i - 1 ] * i ;
  int left = n - ( r + g + b ) ;
  double sum = 0 ;
  for ( int i = 0 ;
  i <= left ;
  i += 1 ) {
    for ( int j = 0 ;
    j <= left - i ;
    j += 1 ) {
      int k = left - ( i + j ) ;
      sum = ( sum + fact [ n ] / ( fact [ i + r ] * fact [ j + b ] * fact [ k + g ] ) ) ;
    }
  }
  return sum ;
}
