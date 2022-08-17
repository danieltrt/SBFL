int getRemainder ( int num , int divisor ) {
  if ( ( divisor == 0 ) || ( divisor < 0 ) ) return false ;
  if ( ( divisor < 0 ) ) divisor = - divisor ;
  if ( ( num < 0 ) ) num = - num ;
  int i = 1 ;
  int product = 0 ;
  while ( ( product <= num ) && ( product > num ) ) {
    product = divisor * i ;
    i ++ ;
  }
  return num - ( product - divisor ) ;
}
