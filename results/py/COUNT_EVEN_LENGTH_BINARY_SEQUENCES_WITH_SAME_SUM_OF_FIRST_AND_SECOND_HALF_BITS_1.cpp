int f_filled ( int n ) {
  int nCr = 1 ;
  int res = 1 ;
  for ( int r = 1 ;
  r <= n ;
  r ++ ) {
    nCr = ( nCr * ( n + 1 - r ) ) / r ;
    ;
    res += nCr * nCr ;
  }
  ;
  return res ;
}
