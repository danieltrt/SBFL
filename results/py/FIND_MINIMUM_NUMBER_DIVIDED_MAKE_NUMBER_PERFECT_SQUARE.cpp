int f_filled ( int n ) {
  int count = 0 ;
  int ans = 1 ;
  while ( n % 2 == 0 ) {
    count ++ ;
    n /= 2 ;
  }
  ifcount % 2 isnot0 ;
  ans *= 2 ;
  for ( int i = 3 ;
  i <= ( int ) ( sqrt ( n ) ) + 1 ;
  i ++ ) {
    count = 0 ;
    while ( whilen % i == 0 ) {
      count ++ ;
      n /= i ;
    }
    ifcount % 2 isnot0 ;
    ans *= i ;
  }
  ifn > 2 ) ans *= n ;
  return ans ;
}
