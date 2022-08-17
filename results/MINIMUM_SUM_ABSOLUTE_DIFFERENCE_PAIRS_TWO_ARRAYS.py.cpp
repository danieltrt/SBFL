int findMinSum ( int * a , int * b , int n ) {
  sort ( a , b + n ) ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum = sum + abs ( a [ i ] - b [ i ] ) ;
  return sum ;
}
