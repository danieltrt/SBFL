int f_filled ( int n ) {
  int p = 1 ;
  if ( ( n > 0 ) && ! ( n & ( n - 1 ) ) ) return n ;
  while ( ( p < n ) && ( p != n ) ) p <<= 1 ;
  return p ;
}
