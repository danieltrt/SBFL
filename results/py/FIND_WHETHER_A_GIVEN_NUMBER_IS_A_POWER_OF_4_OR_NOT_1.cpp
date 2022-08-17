bool f_filled ( unsigned n ) {
  unsigned count = 0 ;
  if ( ( n > 0 ) && ( ! ( n & ( n - 1 ) ) ) ) {
    while ( ( n > 1 ) ) {
      n >>= 1 ;
      count ++ ;
    }
    if ( ( count % 2 == 0 ) && ( n & ( n - 1 ) ) ) return true ;
    else return false ;
  }
  return false ;
}
