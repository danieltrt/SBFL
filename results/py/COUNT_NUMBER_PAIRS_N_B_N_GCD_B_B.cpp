int f_filled ( int n ) {
  int k = n ;
  int imin = 1 ;
  int ans = 0 ;
  while ( ( imin <= n ) && ( imin < n ) ) {
    int imax = n / k ;
    ans += k * ( imax - imin + 1 ) ;
    imin = imax + 1 ;
    k = n / imin ;
  }
  return ans ;
}
