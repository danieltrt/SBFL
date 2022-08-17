long long findMinSum ( long long a [ ] , long long b [ ] , long long n ) {
  qsort ( a , n , sizeof ( long long ) ) ;
  qsort ( b , n , sizeof ( long long ) ) ;
  long long sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum = sum + abs ( a [ i ] - b [ i ] ) ;
  }
  return sum ;
}
