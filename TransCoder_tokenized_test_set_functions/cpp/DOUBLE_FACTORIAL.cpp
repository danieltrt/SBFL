unsigned int doublefactorial ( unsigned int n ) {
  if ( n == 0 || n == 1 ) return 1;
  return n * doublefactorial ( n - 2 );
}