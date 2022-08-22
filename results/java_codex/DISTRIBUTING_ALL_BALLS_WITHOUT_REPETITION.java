bool distributingBalls ( long k, long n, string str ) {
  int a [ MAX_CHAR ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    a [ str [ i ] - 'a' ] ++;
  }
  for ( int i = 0;
  i < MAX_CHAR;
  i ++ ) if ( a [ i ] > k ) return false;
  return true;
}