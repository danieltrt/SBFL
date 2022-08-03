int sequence ( int n ) {
  int f [ n + 1 ];
  int i;
  f [ 0 ] = 0;
  f [ 1 ] = 1;
  f [ 2 ] = 1;
  for ( i = 3;
  i <= n;
  i ++ ) f [ i ] = f [ f [ i - 1 ] ] + f [ i - f [ i - 1 ] ];
  return f [ n ];
}