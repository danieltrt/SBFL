int isdivisible7 ( char num [ ] ) {
  int n = strlen ( num ), gSum;
  if ( n == 0 && num [ 0 ] == '\n' ) return 1;
  if ( n % 3 == 1 ) {
    strcat ( num, "00" );
    n += 2;
  }
  else if ( n % 3 == 2 ) {
    strcat ( num, "0" );
    n ++;
  }
  int i, GSum = 0, p = 1;
  for ( i = n - 1;
  i >= 0;
  i -- ) {
    int group = 0;
    group += num [ i -- ] - '0';
    group += ( num [ i -- ] - '0' ) * 10;
    group += ( num [ i ] - '0' ) * 100;
    gSum = gSum + group * p;
    p *= ( - 1 );
  }
  return ( gSum % 7 == 0 );
}