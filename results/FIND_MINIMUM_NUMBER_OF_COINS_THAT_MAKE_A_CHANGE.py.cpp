int minCoins ( int * coins , int m , int V ) {
  if ( ( V == 0 ) || ( V == 1 ) ) return 0 ;
  int res = INT_MAX ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    if ( ( coins [ i ] <= V ) ) {
      int subRes = minCoins ( coins , m , V - coins [ i ] ) ;
      if ( ( subRes != INT_MAX && subRes + 1 < res ) ) res = subRes + 1 ;
    }
  }
  return res ;
}
