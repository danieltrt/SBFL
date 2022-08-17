int minimum_square ( int a , int b ) {
  int result = 0 ;
  int rem ;
  if ( ( a < b ) && ( b > 0 ) ) a = b ;
  while ( ( b > 0 ) && ( a < b ) ) {
    result += ( int ) ( a / b ) ;
    rem = ( int ) ( a % b ) ;
    a = b ;
    b = rem ;
  }
  return result ;
}
