void bin ( unsigned n ) {
  if ( n > 1 ) bin ( n >> 1 );
  printf ( "%d", n & 1 );
}