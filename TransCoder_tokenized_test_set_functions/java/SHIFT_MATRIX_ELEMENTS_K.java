static void shiftMatrixByK ( int [ ] [ ] mat, int k ) {
  if ( k > N ) {
    System . out . print ( "Shifting is" + " not possible" );
    return;
  }
  int j = 0;
  while ( j < N ) {
    for ( int i = k;
    i < N;
    i ++ ) System . out . print ( mat [ j ] [ i ] + " " );
    for ( int i = 0;
    i < k;
    i ++ ) System . out . print ( mat [ j ] [ i ] + " " );
    System . out . println ( );
    j ++;
  }
}