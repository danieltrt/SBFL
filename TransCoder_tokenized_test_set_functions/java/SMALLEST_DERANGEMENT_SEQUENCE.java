static void generate_derangement ( int N ) {
  int S [ ] = new int [ N + 1 ];
  for ( int i = 1;
  i <= N;
  i ++ ) S [ i ] = i;
  int D [ ] = new int [ N + 1 ];
  for ( int i = 1;
  i <= N;
  i += 2 ) {
    if ( i == N ) {
      D [ N ] = S [ N - 1 ];
      D [ N - 1 ] = S [ N ];
    }
    else {
      D [ i ] = i + 1;
      D [ i + 1 ] = i;
    }
  }
  for ( int i = 1;
  i <= N;
  i ++ ) System . out . print ( D [ i ] + " " );
  System . out . println ( );
}