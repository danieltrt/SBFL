static int xorZero ( String s ) {
  int one_count = 0, zero_count = 0;
  char [ ] str = s . toCharArray ( );
  int n = str . length;
  for ( int i = 0;
  i < n;
  i ++ ) if ( str [ i ] == '1' ) one_count ++;
  else zero_count ++;
  if ( one_count % 2 == 0 ) return zero_count;
  return one_count;
}