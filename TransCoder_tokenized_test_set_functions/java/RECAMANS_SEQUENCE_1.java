static void recaman ( int n ) {
  if ( n <= 0 ) return;
  System . out . printf ( "%d, ", 0 );
  HashSet < Integer > s = new HashSet < Integer > ( );
  s . add ( 0 );
  int prev = 0;
  for ( int i = 1;
  i < n;
  i ++ ) {
    int curr = prev - i;
    if ( curr < 0 || s . contains ( curr ) ) curr = prev + i;
    s . add ( curr );
    System . out . printf ( "%d, ", curr );
    prev = curr;
  }
}