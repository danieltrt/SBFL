int calculate ( int a [ ] , int n ) {
  sort ( a , a + n ) ;
  int s [ n ] ;
  int i = 0 ;
  int j = n - 1 ;
  while ( ( i < j ) && ( i < j ) ) {
    s [ i ] = ( a [ i ] + a [ j ] ) ;
    i ++ ;
    j -- ;
  }
  int mini = min ( s , s ) ;
  int maxi = max ( s , s ) ;
  return abs ( maxi - mini ) ;
}
