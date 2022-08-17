int f_filled ( int coins [ ] , int m , int V ) {
  int table [ V + 1 ] ;
  table [ 0 ] = 0 ;
  for ( int i = 1 ;
  i <= V ;
  i ++ ) table [ i ] = INT_MAX ;
  for ( int i = 1 ;
  i <= V ;
  i ++ ) {
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( coins [ j ] <= i ) && ( i >= coins [ j ] ) ) {
        int subRes = table [ i - coins [ j ] ] ;
        if ( ( subRes != INT_MAX ) && ( subRes + 1 < table [ i ] ) ) table [ i ] = subRes + 1 ;
      }
    }
  }
  return table [ V ] ;
}
