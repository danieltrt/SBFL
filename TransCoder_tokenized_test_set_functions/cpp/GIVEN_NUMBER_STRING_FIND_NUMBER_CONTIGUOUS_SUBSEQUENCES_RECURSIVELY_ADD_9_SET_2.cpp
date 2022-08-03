int count9s ( char number [ ] ) {
  int n = strlen ( number );
  int d [ 9 ];
  memset ( d, 0, sizeof ( d ) );
  d [ 0 ] = 1;
  int result = 0;
  int mod_sum = 0, continuous_zero = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ! int ( number [ i ] - '0' ) ) continuous_zero ++;
    else continuous_zero = 0;
    mod_sum += int ( number [ i ] - '0' );
    mod_sum %= 9;
    result += d [ mod_sum ];
    d [ mod_sum ] ++;
    result -= continuous_zero;
  }
  return result;
}