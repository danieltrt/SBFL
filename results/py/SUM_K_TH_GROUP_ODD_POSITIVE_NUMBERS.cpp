int f_filled ( int k ) {
  int cur = ( int ) ( ( k * ( k - 1 ) ) + 1 ) ;
  int sum = 0 ;
  while ( k ) {
    sum += cur ;
    cur += 2 ;
    k = k - 1 ;
  }
  return sum ;
}