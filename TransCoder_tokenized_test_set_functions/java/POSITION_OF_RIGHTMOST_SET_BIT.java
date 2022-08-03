public static int getFirstSetBitPos ( int n ) {
  return ( int ) ( ( Math . log10 ( n & - n ) ) / Math . log10 ( 2 ) ) + 1;
}