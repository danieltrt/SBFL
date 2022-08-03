int countWays ( string s ) {
  int count [ 26 ] = {
    0 };
    for ( char x : s ) count [ x - 'a' ] ++;
    count [ s [ 0 ] - 'a' ] = 1;
    int ans = 1;
    for ( int i = 0;
    i < 26;
    ++ i ) if ( count [ i ] != 0 ) ans *= count [ i ];
    return ans;
  }