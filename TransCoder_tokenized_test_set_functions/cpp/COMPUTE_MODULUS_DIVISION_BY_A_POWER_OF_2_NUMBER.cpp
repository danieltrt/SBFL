unsigned int getModulo ( unsigned int n, unsigned int d ) {
  return ( n & ( d - 1 ) );
}