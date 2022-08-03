static void LeibnizHarmonicTriangle ( int n ) {
  int C [ ] [ ] = new int [ n + 1 ] [ n + 1 ];
  for ( int i = 0;
  i <= n;
  i ++ ) {
    for ( int j = 0;
    j <= Math . min ( i, n );
    j ++ ) {
      if ( j == 0 || j == i ) C [ i ] [ j ] = 1;
      else C [ i ] [ j ] = C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ];
    }
  }
  for ( int i = 1;
  i <= n;
  i ++ ) {
    for ( int j = 1;
    j <= i;
    j ++ ) System . out . print ( "1/" + i * C [ i - 1 ] [ j - 1 ] + " " );
    System . out . println ( );
  }
}