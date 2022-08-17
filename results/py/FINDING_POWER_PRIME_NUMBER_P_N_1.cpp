int f_filled ( int n , int p ) {
  double ans = 0 ;
  double temp = p ;
  while ( ( temp <= n ) && ( temp > n ) ) {
    ans += n / temp ;
    temp = temp * p ;
  }
  return ( int ) ans ;
}
