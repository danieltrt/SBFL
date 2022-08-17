int f_filled ( int n ) {
  int parity = 0 ;
  while ( n ) {
    parity = ~ parity ;
    n = n & ( n - 1 ) ;
  }
  return parity ;
}
