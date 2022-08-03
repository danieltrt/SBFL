static void printSubsequences ( int n ) {
  int opsize = ( int ) Math . pow ( 2, n );
  for ( int counter = 1;
  counter < opsize;
  counter ++ ) {
    for ( int j = 0;
    j < n;
    j ++ ) {
      if ( BigInteger . valueOf ( counter ) . testBit ( j ) ) System . out . print ( arr [ j ] + " " );
    }
    System . out . println ( );
  }
}