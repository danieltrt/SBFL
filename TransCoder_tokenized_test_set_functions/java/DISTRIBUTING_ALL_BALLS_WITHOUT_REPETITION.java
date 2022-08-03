static boolean distributingBalls ( long k, long n, String str ) {
  int [ ] a = new int [ MAX_CHAR ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    a [ str . charAt ( i ) - 'a' ] ++;
  }
  for ( int i = 0;
  i < MAX_CHAR;
  i ++ ) if ( a [ i ] > k ) return false;
  return true;
}