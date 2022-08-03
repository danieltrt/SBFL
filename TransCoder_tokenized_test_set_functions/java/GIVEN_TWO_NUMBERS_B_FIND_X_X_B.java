static void modularEquation ( int a, int b ) {
  if ( a < b ) {
    System . out . println ( "No solution possible " );
    return;
  }
  if ( a == b ) {
    System . out . println ( "Infinite Solution possible " );
    return;
  }
  int count = 0;
  int n = a - b;
  int y = ( int ) Math . sqrt ( a - b );
  for ( int i = 1;
  i <= y;
  ++ i ) {
    if ( n % i == 0 ) {
      if ( n / i > b ) count ++;
      if ( i > b ) count ++;
    }
  }
  if ( y * y == n && y > b ) count --;
  System . out . println ( count );
}