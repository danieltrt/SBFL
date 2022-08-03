long int stirlingFactorial ( int n ) {
  if ( n == 1 ) return 1;
  long int z;
  float e = 2.71;
  z = sqrt ( 2 * 3.14 * n ) * pow ( ( n / e ), n );
  return z;
}