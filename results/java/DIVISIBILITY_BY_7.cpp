bool f_filled ( int num ) {
  if ( num < 0 ) return f_filled ( - num ) ;
  if ( num == 0 || num == 7 ) return true ;
  if ( num < 10 ) return false ;
  return f_filled ( num / 10 - 2 * ( num - num / 10 * 10 ) ) ;
}
