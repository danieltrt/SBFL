int f_filled ( int * arr , int n ) {
  sort ( arr , arr + n ) ;
  ;
  int minXor = 999999 ;
  int val = 0 ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n - 1 ;
    j ++ ) {
      val = arr [ i ] ^ arr [ j ] ;
      minXor = min ( minXor , val ) ;
    }
  }
  return minXor ;
}
