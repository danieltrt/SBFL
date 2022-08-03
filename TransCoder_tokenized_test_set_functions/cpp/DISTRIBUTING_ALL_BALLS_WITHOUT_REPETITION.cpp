bool distributingBalls ( int k, int n, string str ) {
  int a [ MAX_CHAR ] = {
    0 };
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