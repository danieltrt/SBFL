bool isPrime ( int p ) {
  double checkNumber = pow ( 2, p ) - 1;
  double nextval = fmod ( 4, checkNumber );
  for ( int i = 1;
  i < p - 1;
  i ++ ) nextval = fmod ( ( nextval * nextval - 2 ), checkNumber );
  return ( nextval == 0 );
}