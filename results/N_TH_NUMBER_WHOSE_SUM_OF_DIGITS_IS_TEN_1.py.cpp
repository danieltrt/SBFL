int findNth ( int n ) {
  int count = 0 ;
  int curr = 19 ;
  while ( ( true ) ) {
    int sum = 0 ;
    int x = curr ;
    while ( ( x > 0 ) && ( x != 0 ) ) {
      sum = sum + x % 10 ;
      x = ( int ) ( x / 10 ) ;
    }
    if ( ( sum == 10 ) && ( count == 10 ) ) {
      count ++ ;
    }
    if ( ( count == n ) && ( curr == 19 ) ) {
      return curr ;
    }
    curr += 9 ;
  }
  return - 1 ;
}
