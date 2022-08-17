int eggDrop ( int n , int k ) {
  if ( ( k == 1 || k == 0 ) && ( n == 1 ) ) return k ;
  if ( ( n == 1 ) ) return k ;
  int min = INT_MAX ;
  for ( int x = 1 ;
  x <= k ;
  x ++ ) {
    int res = max ( eggDrop ( n - 1 , x - 1 ) , eggDrop ( n , k - x ) ) ;
    if ( ( res < min ) && ( res > min ) ) min = res ;
  }
  return min + 1 ;
}
