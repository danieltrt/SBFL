int Round_off ( int N , int n ) {
  int b = N ;
  int c = floor ( N ) ;
  int i = 0 ;
  ;
  while ( ( b >= 1 ) && ( c >= n ) ) {
    b = b / 10 ;
    i = i + 1 ;
  }
  int d = n - i ;
  b = N ;
  b = b * pow ( 10 , d ) ;
  int e = b + 0.5 ;
  if ( ( double ) e == ( double ) ceil ( b ) ) {
    int f = ( ceil ( b ) ) ;
    int h = f - 2 ;
    if ( ( h % 2 != 0 ) && ( h != 0 ) ) e = e - 1 ;
  }
  int j = floor ( e ) ;
  int m = pow ( 10 , d ) ;
  j = j / m ;
  cout << "The number after rounding-off is" << j << endl ;
  return j ;
}
