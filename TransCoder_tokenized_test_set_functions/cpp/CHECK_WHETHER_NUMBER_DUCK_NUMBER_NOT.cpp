int check_duck ( char * num ) {
  int len = strlen ( num );
  int count_zero = 0;
  char ch;
  for ( int i = 1;
  i < len;
  i ++ ) {
    ch = num [ i ];
    if ( ch == '0' ) count_zero ++;
  }
  return count_zero;
}