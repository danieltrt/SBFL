static String decToBin ( int n ) {
  if ( n == 0 ) return "0";
  String bin = "";
  while ( n > 0 ) {
    bin = ( ( n & 1 ) == 0 ? '0' : '1' ) + bin;
    n >>= 1;
  }
  return bin;
}