int findCountOfSolutions ( int n, int p ) {
  ll ans = 0;
  for ( ll x = 1;
  x < p;
  x ++ ) {
    if ( ( x * x ) % p == 1 ) {
      ll last = x + p * ( n / p );
      if ( last > n ) last -= p;
      ans += ( ( last - x ) / p + 1 );
    }
  }
  return ans;
}