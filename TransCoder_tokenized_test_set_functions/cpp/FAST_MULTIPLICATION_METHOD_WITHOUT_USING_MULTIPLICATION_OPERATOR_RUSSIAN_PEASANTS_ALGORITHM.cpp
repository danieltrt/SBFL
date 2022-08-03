unsigned int russianPeasant ( unsigned int a, unsigned int b ) {
  int res = 0;
  while ( b > 0 ) {
    if ( b & 1 ) res = res + a;
    a = a << 1;
    b = b >> 1;
  }
  return res;
}