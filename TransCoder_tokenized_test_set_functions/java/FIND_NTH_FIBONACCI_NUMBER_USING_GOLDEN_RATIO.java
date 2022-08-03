static int fib ( int n ) {
  if ( n < 6 ) return f [ n ];
  int t = 5;
  int fn = 5;
  while ( t < n ) {
    fn = ( int ) Math . round ( fn * PHI );
    t ++;
  }
  return fn;
}