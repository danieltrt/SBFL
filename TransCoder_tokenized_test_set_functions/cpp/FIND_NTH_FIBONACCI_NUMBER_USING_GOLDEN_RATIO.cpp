int fib ( int n ) {
  if ( n < 6 ) return f [ n ];
  int t = 5, fn = 5;
  while ( t < n ) {
    fn = round ( fn * PHI );
    t ++;
  }
  return fn;
}