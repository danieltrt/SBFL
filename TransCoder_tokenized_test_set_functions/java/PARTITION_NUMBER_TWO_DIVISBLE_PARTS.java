static void findDivision ( String str, int a, int b ) {
  int len = str . length ( );
  int [ ] lr = new int [ len + 1 ];
  lr [ 0 ] = ( ( int ) str . charAt ( 0 ) - ( int ) '0' ) % a;
  for ( int i = 1;
  i < len;
  i ++ ) lr [ i ] = ( ( lr [ i - 1 ] * 10 ) % a + ( ( int ) str . charAt ( i ) - ( int ) '0' ) ) % a;
  int [ ] rl = new int [ len + 1 ];
  rl [ len - 1 ] = ( ( int ) str . charAt ( len - 1 ) - ( int ) '0' ) % b;
  int power10 = 10;
  for ( int i = len - 2;
  i >= 0;
  i -- ) {
    rl [ i ] = ( rl [ i + 1 ] + ( ( int ) str . charAt ( i ) - ( int ) '0' ) * power10 ) % b;
    power10 = ( power10 * 10 ) % b;
  }
  for ( int i = 0;
  i < len - 1;
  i ++ ) {
    if ( lr [ i ] != 0 ) continue;
    if ( rl [ i + 1 ] == 0 ) {
      System . out . println ( "YES" );
      for ( int k = 0;
      k <= i;
      k ++ ) System . out . print ( str . charAt ( k ) );
      System . out . print ( ", " );
      for ( int k = i + 1;
      k < len;
      k ++ ) System . out . print ( str . charAt ( k ) );
      return;
    }
  }
  System . out . println ( "NO" );
}