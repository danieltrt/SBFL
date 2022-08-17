Boolean f_filled ( int64_t a , int64_t b ) {
  if ( a == 0 || b == 0 ) return false ;
  int64_t result = a * b ;
  if ( a == result / b ) return false ;
  else return true ;
}
