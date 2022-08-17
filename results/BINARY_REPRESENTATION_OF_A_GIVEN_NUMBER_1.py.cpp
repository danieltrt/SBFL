int bin ( int n ) {
  if ( ( n > 1 ) && ( n & 1 ) == 0 ) bin ( n >> 1 ) ;
  cout << n & 1 << " " ;
  return n >> 1 ;
}
