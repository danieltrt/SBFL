int countNums ( int n, int x, int y ) {
  bool arr [ n + 1 ];
  for ( int i = 0; i <= n; i ++ ) arr [ i ] = false;
  if ( x <= n ) arr [ x ] = true;
  if ( y <= n ) arr [ y ] = true;
  int result = 0;
  for ( int i = min ( x, y ); i <= n; i ++ ) {
    if ( arr [ i ] ) {
      if ( i + x <= n ) arr [ i + x ] = true;
      if ( i + y <= n ) arr [ i + y ] = true;
      result ++;
    }
  }
  return result;
}