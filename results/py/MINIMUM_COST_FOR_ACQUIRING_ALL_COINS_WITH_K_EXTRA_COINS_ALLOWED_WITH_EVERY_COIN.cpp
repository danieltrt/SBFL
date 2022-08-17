int f_filled ( int * coin , int n , int k ) {
  sort ( coin , coin + n ) ;
  int coinsNeeded = ceil ( 1.0 * n / ( k + 1 ) ) ;
  ;
  int ans = 0 ;
  for ( int i = 0 ;
  i < coinsNeeded - 1 + 1 ;
  i ++ ) ans += coin [ i ] ;
  return ans ;
}
