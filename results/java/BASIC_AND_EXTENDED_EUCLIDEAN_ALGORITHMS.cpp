int f_filled ( int a , int b ) {
  if ( a == 0 ) return b ;
  return f_filled ( b % a , a ) ;
}
