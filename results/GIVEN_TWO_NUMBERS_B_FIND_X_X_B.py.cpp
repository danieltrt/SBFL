int modularEquation ( int a , int b ) {
  if ( ( a < b ) || ( b > a ) ) {
    cout << "No solution possible " << endl ;
    return 0 ;
  }
  if ( ( a == b ) || ( a == b ) ) {
    cout << "Infinite Solution possible " << endl ;
    return 0 ;
  }
  int count = 0 ;
  int n = a - b ;
  int y = ( int ) ( sqrt ( a - b ) ) ;
  for ( int i = 1 ;
  i <= y ;
  i ++ ) {
    if ( ( n % i ) == 0 ) {
      if ( ( n / i > b ) ) count = count + 1 ;
      if ( ( i > b ) ) count = count + 1 ;
    }
  }
  if ( ( y * y == n && y > b ) || ( y == b ) ) count = count - 1 ;
  cout << count << endl ;
  return count ;
}
