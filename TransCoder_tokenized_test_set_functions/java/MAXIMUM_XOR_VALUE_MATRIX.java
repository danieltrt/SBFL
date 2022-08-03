static int maxXOR ( int mat [ ] [ ], int N ) {
  int r_xor, c_xor;
  int max_xor = 0;
  for ( int i = 0;
  i < N;
  i ++ ) {
    r_xor = 0;
    c_xor = 0;
    for ( int j = 0;
    j < N;
    j ++ ) {
      r_xor = r_xor ^ mat [ i ] [ j ];
      c_xor = c_xor ^ mat [ j ] [ i ];
    }
    if ( max_xor < Math . max ( r_xor, c_xor ) ) max_xor = Math . max ( r_xor, c_xor );
  }
  return max_xor;
}