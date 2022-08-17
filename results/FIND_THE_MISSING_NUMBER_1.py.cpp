int getMissingNo ( int a [ ] , int n ) {
  int i , total = 0 ;
  for ( i = 2 ;
  i <= n ;
  i ++ ) {
    total += i ;
    total -= a [ i - 2 ] ;
  }
  return total ;
}
