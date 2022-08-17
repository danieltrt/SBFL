int f_filled ( int n ) {
  int res [ n ] ;
  res [ 0 ] = 0 ;
  res [ 1 ] = 1 ;
  int i = 2 ;
  while ( i < n + 1 ) {
    res [ i ] = max ( i , ( res [ ( int ) ( i / 2 ) ] + res [ ( int ) ( i / 3 ) ] + res [ ( int ) ( i / 4 ) ] + res [ ( int ) ( i / 5 ) ] ) ;
    i = i + 1 ;
  }
  return res [ n ] ;
}
