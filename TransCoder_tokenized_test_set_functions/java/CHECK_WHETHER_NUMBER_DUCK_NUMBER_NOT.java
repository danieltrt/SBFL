static int check_duck ( String num ) {
  int len = num . length ( );
  int count_zero = 0;
  char ch;
  for ( int i = 1;
  i < len;
  i ++ ) {
    ch = num . charAt ( i );
    if ( ch == '0' ) count_zero ++;
  }
  return count_zero;
}